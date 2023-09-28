<!DOCTYPE html>
<html lang="en">
	<head>
		<meta charset="utf-8">
		<meta http-equiv="X-UA-Compatible" content="IE=edge">
		<meta name="viewport" content="width=device-width, initial-scale=1">
		<!-- The above 3 meta tags *must* come first in the head; any other head content must come *after* these tags -->
		<meta name="description" content="">
		<meta name="google" content="notranslate">
	
		  <script async="" src="https://www.googletagmanager.com/gtm.js?id=GTM-N4C8MF2"></script><script>
		window.dataLayer = window.dataLayer || [];
		dataLayer.push({"userId":488834,"visitorType":"student","batch":{"id":115,"fullNameWithC":"AFR-0723 (C#18)","schoolLocation":{"id":1,"name":"ALX Africa"}},"curriculum":{"id":1,"name":"SE Foundations"}});
	
		window.gtm_user_custom_event = function (name, options) {
		  if (typeof name === 'undefined') {
			return;
		  }
	
		  window.dataLayer.push({
			customEventOptions: typeof options !== 'undefined' ? options : {},
			event: name,
		  });
		}
	  </script>
	
	  <!-- Google Tag Manager -->
	  <script>(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
	  new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
	  j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
	  'https://www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
	  })(window,document,'script','dataLayer','GTM-N4C8MF2');</script>
	  <!-- End Google Tag Manager -->
	
	
		<title>Project: 0x14. C - Bit manipulation | ALX Africa Intranet</title>
	
		  <link rel="stylesheet" href="https://use.typekit.net/xgz4ilr.css">
		  <link rel="stylesheet" media="all" href="/assets/application_alx-74569621e0a42d001c13ab89b56439fe012151faea39290de037757e4f7aa681.css">
		  <script src="https://www.gstatic.com/charts/loader.js"></script>
		  <script src="/assets/application-5706839fb304956e60447a09b3777f0619be3f1897ac01833392e18931549abd.js"></script>
		  <link rel="shortcut icon" type="image/x-icon" href="/favicon_alx.ico">
		  <meta name="csrf-param" content="authenticity_token">
	<meta name="csrf-token" content="n2yLX2m4P2TbalNBqKxxWi_1O29M7LbqCO5oun4klzW0L6KXXz2qtEIbZ9IiG8zeLSpgM8nmtCtPJOx-IYRTxw">
	
		  <link rel="apple-touch-icon" href="/apple-touch-icon_alx.png">
	
		  <!-- HTML5 shim and Respond.js for IE8 support of HTML5 elements and media queries -->
		  <!--[if lt IE 9]>
			<script src="https://oss.maxcdn.com/html5shiv/3.7.2/html5shiv.min.js"></script>
			<script src="https://oss.maxcdn.com/respond/1.4.2/respond.min.js"></script>
		  <![endif]-->
	
		  <!-- Store user timezone -->
		  <script>
			Cookies.set('timezone', (new Date()).getTimezoneOffset() / -60.0);
		  </script>
	
		  <!-- intro.js for interactive onboarding -->
	
		  <!-- React -->
		  <script src="/packs/js/application-9f538f725b9264f19c6a.js"></script>
		  <link rel="stylesheet" media="screen" href="/packs/css/application-87456da7.css">
	  </head>
<body>
	<div class="col-xs-12 col-md-10 col-lg-8 contains-images">

		<h1 class="gap">0x14. C - Bit manipulation</h1>
	
	<div data-react-class="tags/Tags" data-react-props="{&quot;tags&quot;:[{&quot;id&quot;:7,&quot;value&quot;:&quot;C&quot;,&quot;author_id&quot;:null,&quot;created_at&quot;:&quot;2022-06-16T01:59:38.000Z&quot;,&quot;updated_at&quot;:&quot;2022-06-16T01:59:38.000Z&quot;}]}" data-react-cache-id="tags/Tags-0"><div class="align-items-center d-flex flex-wrap gap-3 my-2"><span class="label label-primary" style="font-size: 14px;">C</span></div></div>
	
	<div data-react-class="projects/ProjectMetadata" data-react-props="{&quot;metadata&quot;:{&quot;author&quot;:&quot;Julien Barbier&quot;,&quot;weight&quot;:1,&quot;correction&quot;:{&quot;released&quot;:true,&quot;auto_correction_available_at&quot;:&quot;2023-09-28T12:00:00.000+03:00&quot;,&quot;requires_auto_correction&quot;:true,&quot;requires_manual_correction&quot;:false},&quot;bpi&quot;:{&quot;current&quot;:true,&quot;started&quot;:false,&quot;in_second_deadline&quot;:false,&quot;starts_at&quot;:&quot;2023-09-28T06:00:00.000+03:00&quot;,&quot;ends_at&quot;:&quot;2023-09-29T06:00:00.000+03:00&quot;,&quot;second_deadline_at&quot;:&quot;2023-09-30T06:00:00.000+03:00&quot;}}}" data-react-cache-id="projects/ProjectMetadata-0"><ul class="list-group metadata" id="project-metadata"><li class="list-group-item"><i aria-hidden="true" class="fa-solid fa-user fa-fw"></i> By: Julien Barbier</li><li class="list-group-item"><i aria-hidden="true" class="fa-solid fa-gear fa-fw"></i> Weight: 1</li><li class="list-group-item"><i aria-hidden="true" class="fa-solid fa-calendar fa-fw"></i> Project will start <span data-container="body" data-html="false" data-placement="auto top" data-toggle="tooltip" title="" data-original-title="2023-09-28 06:00 (GMT+03:00)"><span class="datetime">Sep 28, 2023 4:00 AM</span></span>, must end by <span data-container="body" data-html="false" data-placement="auto top" data-toggle="tooltip" title="" data-original-title="2023-09-29 06:00 (GMT+03:00)"><span class="datetime">Sep 29, 2023 4:00 AM</span></span></li><li class="list-group-item"><i aria-hidden="true" class="fa-solid fa-check fa-fw"></i> Checker was released at <span data-container="body" data-html="false" data-placement="auto top" data-toggle="tooltip" title="" data-original-title="2023-09-28 12:00 (GMT+03:00)"><span class="datetime">Sep 28, 2023 10:00 AM</span></span></li><li class="list-group-item"><i aria-hidden="true" class="fa-solid fa-square-check fa-fw"></i> An auto review will be launched at the deadline</li></ul></div>
	
	
	
	
	  
	
	
	  <div id="project_id" style="display: none" data-project-id="232"></div>
	
	
	
		
	
		
	
		<div class="panel panel-default" id="project-description">
	<div class="panel-body">
	  <p><img src="https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/232/bitwise.PNG"></p>
	
	<h2>Resources</h2>
	
	<p><strong>Read or watch</strong>:</p>
	
	<ul>
	<li><a href="/rltoken/-tOFAtANisYQthxNBmJB8g" title="Google" target="_blank">Google</a> </li>
	<li><a href="/rltoken/-PNa1vv5T3tqVVY4PRlGrg" title="Youtube" target="_blank">Youtube</a> </li>
	</ul>
	
	<h2>Learning Objectives</h2>
	
	<p>At the end of this project, you are expected to be able to <a href="/rltoken/I5Fy78OBq-wgaGEpcgq2oA" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>
	
	<h3>General</h3>
	
	<ul>
	<li>Look for the right source of information without too much help</li>
	<li>How to manipulate bits and use bitwise operators</li>
	</ul>
	
	<h3>Copyright - Plagiarism</h3>
	
	<ul>
	<li>You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.</li>
	<li>You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work. </li>
	<li>You are not allowed to publish any content of this project.</li>
	<li>Any form of plagiarism is strictly forbidden and will result in removal from the program.</li>
	</ul>
	
	<h2>Requirements</h2>
	
	<h3>General</h3>
	
	<ul>
	<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
	<li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
	<li>All your files should end with a new line</li>
	<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
	<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/alx-tools/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/alx-tools/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
	<li>You are not allowed to use global variables</li>
	<li>No more than 5 functions per file</li>
	<li>The only C standard library functions allowed are <code>malloc</code>, <code>free</code> and <code>exit</code>. Any use of functions like <code>printf</code>, <code>puts</code>, <code>calloc</code>, <code>realloc</code> etc… is forbidden</li>
	<li>You are allowed to use <a href="https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c" title="_putchar" target="_blank">_putchar</a></li>
	<li>You don’t have to push <code>_putchar.c</code>, we will use our file. If you do it won’t be taken into account</li>
	<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
	<li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>main.h</code></li>
	<li>Don’t forget to push your header file</li>
	<li>All your header files should be include guarded</li>
	</ul>
	
	</div>
		</div>
	</div>
</body>
</html>
