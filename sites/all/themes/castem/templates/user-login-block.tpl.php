<aside id="user-login">
  <div class="header">
    <h3>Login</h3>
  </div>
  <div class="content">
    <div id="user-login-block-container">
      <div id="user-login-block-form-fields">
        <?php print $name; // Display username field ?>
        <?php print $pass; // Display Password field ?>
        <?php print $submit; // Display submit button ?>
        <?php print $rendered; // Display hidden elements (required for successful login) ?> 
      </div>
      <div class="links">
        <a href="/user/register">Create Account</a> |
        <a href="/user/password">Forgot Password</a>
      </div>
    </div>
  </div>
</aside>