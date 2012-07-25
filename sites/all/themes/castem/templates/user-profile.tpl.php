<?php
  $path = drupal_get_destination();
  $path = $path['destination'];
  $path_a = explode('/', $path);
  $uid = $path_a[1];
  $edit_path = "#overlay=user/$uid/edit";

  $edit_image = array(
    'path' => "/sites/all/themes/castem/images/user_edit.png",
    'alt' => 'edit profile',
    'title' => 'edit this profile',
    'attributes' => array('class' => 'edit-profile-img'),
  );
  $add_image = array(
    'path' => "/sites/all/themes/castem/images/add.png",
    'alt' => 'add lesson plan',
    'title' => 'Upload a new lesson plan',
    'attributes' => array('class' => 'new-lesson-img'),
  );
?>
<div id="user-profile">
  <div class="user-header">
    <div id="user-picture">
      <?php print $user_profile['user_picture']['#markup']; ?>
    </div>
    <div class="header-content">
      <h2 class="name"><?php 
        print ucwords($field_first_name[0]['value'])."&nbsp";
        print ucwords($field_last_name[0]['value']); ?></h2>
      <span class="program">Bechtel</span>
    </div>
    <?php if ($user->uid == $uid || user_access('administer users')): ?>
      <div class="edit-user"><a href="<?php print $edit_path?>"><?php 
        print theme_image($edit_image); ?>&nbsp;Edit Profile</a>
      </div>
    <?php endif; ?>
  </div>
  <div class="clear"></div>
  <div class="content">
    <div id="user-bio">
      <?php print $field_user_bio[0]['value']; ?>
    </div>
    <aside id="lesson-plans">
      <div class="header">
        <h3>Lesson Plans</h3>
        <?php if ($user->uid == $uid): ?>
          <a class ="add-lesson" 
            href="#overlay=node/add/lesson-plan"><?php 
            print theme_image($add_image); ?></a>
        <?php endif; ?>
      </div>
      <div class="content">
        <?php
          $query = new EntityFieldQuery;
          $count = $query->entityCondition('entity_type', 'node')
            ->entityCondition('bundle', 'lesson_plan')
            ->propertyCondition('status', 1) // Getting published nodes only.
            ->propertyCondition('uid', $uid)
            ->count()
            ->execute();
          
          if ($count > 0) {
            $lesson_plans = views_embed_view('lesson_plans', 'block');
            print render($lesson_plans);
          } else {
            $first_name = ucwords($field_first_name[0]['value']);
            print "<p class=\"no-lessons\">".
              "$first_name has no published lesson plans.</p>";
          } ?>
      </div>
    </aside>
  </div>
</div>