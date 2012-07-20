<?php
  $path = drupal_get_destination();
  $path = $path['destination'];
  $path_a = explode('/', $path);
  $uid = $path_a[1];
  $edit_path = "/user/$uid/edit";
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
      <?php $image_array = array(
          'path' => "/sites/all/themes/castem/images/user_edit.png",
          'alt' => 'edit profile',
          'title' => 'edit this profile',
          'attributes' => array('class' => 'edit-profile-img'),
        ); ?>
        <div class="edit-user"><a href="<?php print $edit_path?>">
          <?php print theme_image($image_array); ?>
          Edit Profile</a></div>
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
      </div>
      <div class="content">
        <?php
          $lesson_plans = views_embed_view('lesson_plans', 'block');
          print render($lesson_plans); ?>
      </div>
    </aside>
  </div>
</div>