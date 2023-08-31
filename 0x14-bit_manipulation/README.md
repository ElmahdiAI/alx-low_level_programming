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
		dataLayer.push({"userId":488834,"visitorType":"student","batch":{"id":99,"fullNameWithC":"AFR-0623 (C#17)","schoolLocation":{"id":1,"name":"ALX Africa"}},"curriculum":{"id":1,"name":"SE Foundations"}});
	
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
		  <link rel="stylesheet" media="all" href="/assets/application_alx-e1aa485258dfce25ad8fa691368792000eb8217d3990ef9e64e9b1a8a1ef761b.css">
		  <script src="https://www.gstatic.com/charts/loader.js"></script>
		  <script src="/assets/application-54114f22a70e5f69761998e8ac495fbe3bc128fecc9e13aa1cea5d1b8aa37b6d.js"></script>
		  <link rel="shortcut icon" type="image/x-icon" href="/favicon_alx.ico">
		  <meta name="csrf-param" content="authenticity_token">
	<meta name="csrf-token" content="ujA4tRaRXbQ3JBezXUbvQBRWm__309St_LNzWISORq6RcxF9IBTIZK5VIyDX8VLEFonAo3LZ1my7efec2y6CXA">
	
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
		  <script src="/packs/js/application-b9b1cbd93df434318d5c.js"></script>
		  <link rel="stylesheet" media="screen" href="/packs/css/application-87456da7.css">
	  </head>
<body>
	<div class="project row">
		<div class="col-xs-12 col-md-10 col-lg-8 contains-images">
	  
			<h1 class="gap">0x14. C - Bit manipulation</h1>
	  
		<div data-react-class="tags/Tags" data-react-props="{&quot;tags&quot;:[{&quot;id&quot;:7,&quot;value&quot;:&quot;C&quot;,&quot;author_id&quot;:null,&quot;created_at&quot;:&quot;2022-06-16T01:59:38.000Z&quot;,&quot;updated_at&quot;:&quot;2022-06-16T01:59:38.000Z&quot;}]}" data-react-cache-id="tags/Tags-0"><div class="align-items-center d-flex flex-wrap gap-3 my-2"><span class="label label-primary" style="font-size: 14px;">C</span></div></div>
	  
		<div data-react-class="projects/ProjectMetadata" data-react-props="{&quot;metadata&quot;:{&quot;author&quot;:&quot;Julien Barbier&quot;,&quot;weight&quot;:1,&quot;correction&quot;:{&quot;released&quot;:true,&quot;auto_correction_available_at&quot;:&quot;2023-08-31T12:00:00.000+03:00&quot;,&quot;requires_auto_correction&quot;:true,&quot;requires_manual_correction&quot;:false},&quot;bpi&quot;:{&quot;current&quot;:true,&quot;started&quot;:false,&quot;in_second_deadline&quot;:false,&quot;starts_at&quot;:&quot;2023-08-31T06:00:00.000+03:00&quot;,&quot;ends_at&quot;:&quot;2023-09-01T06:00:00.000+03:00&quot;,&quot;second_deadline_at&quot;:&quot;2023-09-02T06:00:00.000+03:00&quot;}}}" data-react-cache-id="projects/ProjectMetadata-0"><ul class="list-group metadata" id="project-metadata"><li class="list-group-item"><i aria-hidden="true" class="fa fa-user fa-fw"></i> By: Julien Barbier</li><li class="list-group-item"><i aria-hidden="true" class="fa fa-cog fa-fw"></i> Weight: 1</li><li class="list-group-item"><i aria-hidden="true" class="fa fa-calendar fa-fw"></i> Project will start <span data-container="body" data-html="false" data-placement="auto top" data-toggle="tooltip" title="" data-original-title="2023-08-31 06:00 (GMT+03:00)"><span class="datetime">Aug 31, 2023 4:00 AM</span></span>, must end by <span data-container="body" data-html="false" data-placement="auto top" data-toggle="tooltip" title="" data-original-title="2023-09-01 06:00 (GMT+03:00)"><span class="datetime">Sep 1, 2023 4:00 AM</span></span></li><li class="list-group-item"><i aria-hidden="true" class="fa fa-check fa-fw"></i> Checker was released at <span data-container="body" data-html="false" data-placement="auto top" data-toggle="tooltip" title="" data-original-title="2023-08-31 12:00 (GMT+03:00)"><span class="datetime">Aug 31, 2023 10:00 AM</span></span></li><li class="list-group-item"><i aria-hidden="true" class="fa fa-check-square fa-fw"></i> An auto review will be launched at the deadline</li></ul></div>
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
	  
	  
			
	  
			  <div class="panel panel-default" id="project-quiz-questions-title">
		  <div class="panel-heading">
			<h3 class="panel-title">
			  Quiz questions
			</h3>
		  </div>
	  
		  <div class="panel-body">
	  
			  <div class="alert alert-info">
				<strong>Great!</strong>
				You've completed the quiz successfully! Keep going!
				<span id="quiz_questions_collapse_toggle">(Show quiz)</span>
			  </div>
	  
			<section class="quiz_questions_show_container" style="display: none;">
				<div class="quiz_question_item_container" data-role="quiz_question73" data-position="3">
				  <div class=" clearfix" id="quiz_question-73">
	  
		  <h4 class="quiz_question">
			  
			  Question #0
		  </h4>
	  
		  <!-- Quiz question Body -->
		  <p>What is <code>0b001010010</code> in base10?</p>
	  
	  
		  <!-- Quiz question Answers -->
			  <ul class="quiz_question_answers" data-question-id="73">
					  <li class="">
	  
		<input type="radio" name="73" id="73-1498501825096" value="1498501825096" data-quiz-answer-id="1498501825096" data-quiz-question-id="73" disabled="disabled" checked="checked">
		<label for="73-1498501825096"><p>82</p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="73" id="73-1498501786084" value="1498501786084" data-quiz-answer-id="1498501786084" data-quiz-question-id="73" disabled="disabled">
		<label for="73-1498501786084"><p>81</p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="73" id="73-1498501827725" value="1498501827725" data-quiz-answer-id="1498501827725" data-quiz-question-id="73" disabled="disabled">
		<label for="73-1498501827725"><p>83</p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="73" id="73-1498501848293" value="1498501848293" data-quiz-answer-id="1498501848293" data-quiz-question-id="73" disabled="disabled">
		<label for="73-1498501848293"><p>84</p>
	  </label>
	  </li>
	  
			  </ul>
	  
		  <!-- Quiz question Tips -->
	  
	  </div>
	  
				</div>
				<div class="quiz_question_item_container" data-role="quiz_question76" data-position="6">
				  <div class=" clearfix" id="quiz_question-76">
	  
		  <h4 class="quiz_question">
			  
			  Question #1
		  </h4>
	  
		  <!-- Quiz question Body -->
		  <p>What is <code>98</code> in base16?</p>
	  
	  
		  <!-- Quiz question Answers -->
			  <ul class="quiz_question_answers" data-question-id="76">
					  <li class="">
	  
		<input type="radio" name="76" id="76-1498503068118" value="1498503068118" data-quiz-answer-id="1498503068118" data-quiz-question-id="76" disabled="disabled">
		<label for="76-1498503068118"><p>0x98</p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="76" id="76-1498503016491" value="1498503016491" data-quiz-answer-id="1498503016491" data-quiz-question-id="76" disabled="disabled" checked="checked">
		<label for="76-1498503016491"><p>0x62</p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="76" id="76-1498503076343" value="1498503076343" data-quiz-answer-id="1498503076343" data-quiz-question-id="76" disabled="disabled">
		<label for="76-1498503076343"><p>0x96</p>
	  </label>
	  </li>
	  
			  </ul>
	  
		  <!-- Quiz question Tips -->
	  
	  </div>
	  
				</div>
				<div class="quiz_question_item_container" data-role="quiz_question59" data-position="13">
				  <div class=" clearfix" id="quiz_question-59">
	  
		  <h4 class="quiz_question">
			  
			  Question #2
		  </h4>
	  
		  <!-- Quiz question Body -->
		  <p><code>0x01 | 0x00 =</code> ?</p>
	  
	  
		  <!-- Quiz question Answers -->
			  <ul class="quiz_question_answers" data-question-id="59">
					  <li class="">
	  
		<input type="radio" name="59" id="59-1498499797881" value="1498499797881" data-quiz-answer-id="1498499797881" data-quiz-question-id="59" disabled="disabled" checked="checked">
		<label for="59-1498499797881"><p><code>0x01</code></p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="59" id="59-1498499795822" value="1498499795822" data-quiz-answer-id="1498499795822" data-quiz-question-id="59" disabled="disabled">
		<label for="59-1498499795822"><p><code>0x00</code></p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="59" id="59-1498499800692" value="1498499800692" data-quiz-answer-id="1498499800692" data-quiz-question-id="59" disabled="disabled">
		<label for="59-1498499800692"><p><code>0x02</code></p>
	  </label>
	  </li>
	  
			  </ul>
	  
		  <!-- Quiz question Tips -->
	  
	  </div>
	  
				</div>
				<div class="quiz_question_item_container" data-role="quiz_question72" data-position="2">
				  <div class=" clearfix" id="quiz_question-72">
	  
		  <h4 class="quiz_question">
			  
			  Question #3
		  </h4>
	  
		  <!-- Quiz question Body -->
		  <p>What is <code>0x89</code> in base2?</p>
	  
	  
		  <!-- Quiz question Answers -->
			  <ul class="quiz_question_answers" data-question-id="72">
					  <li class="">
	  
		<input type="radio" name="72" id="72-1498501753887" value="1498501753887" data-quiz-answer-id="1498501753887" data-quiz-question-id="72" disabled="disabled" checked="checked">
		<label for="72-1498501753887"><p>0b10001001</p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="72" id="72-1498501736994" value="1498501736994" data-quiz-answer-id="1498501736994" data-quiz-question-id="72" disabled="disabled">
		<label for="72-1498501736994"><p>0b10101001</p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="72" id="72-1498501763368" value="1498501763368" data-quiz-answer-id="1498501763368" data-quiz-question-id="72" disabled="disabled">
		<label for="72-1498501763368"><p>0b01101001</p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="72" id="72-1498501772244" value="1498501772244" data-quiz-answer-id="1498501772244" data-quiz-question-id="72" disabled="disabled">
		<label for="72-1498501772244"><p>0b10001000</p>
	  </label>
	  </li>
	  
			  </ul>
	  
		  <!-- Quiz question Tips -->
	  
	  </div>
	  
				</div>
				<div class="quiz_question_item_container" data-role="quiz_question71" data-position="1">
				  <div class=" clearfix" id="quiz_question-71">
	  
		  <h4 class="quiz_question">
			  
			  Question #4
		  </h4>
	  
		  <!-- Quiz question Body -->
		  <p>What is <code>0x89</code> in base10?</p>
	  
	  
		  <!-- Quiz question Answers -->
			  <ul class="quiz_question_answers" data-question-id="71">
					  <li class="">
	  
		<input type="radio" name="71" id="71-1498501623131" value="1498501623131" data-quiz-answer-id="1498501623131" data-quiz-question-id="71" disabled="disabled">
		<label for="71-1498501623131"><p>135</p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="71" id="71-1498501617324" value="1498501617324" data-quiz-answer-id="1498501617324" data-quiz-question-id="71" disabled="disabled">
		<label for="71-1498501617324"><p>89</p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="71" id="71-1498501637713" value="1498501637713" data-quiz-answer-id="1498501637713" data-quiz-question-id="71" disabled="disabled" checked="checked">
		<label for="71-1498501637713"><p>137</p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="71" id="71-1498501641441" value="1498501641441" data-quiz-answer-id="1498501641441" data-quiz-question-id="71" disabled="disabled">
		<label for="71-1498501641441"><p>139</p>
	  </label>
	  </li>
	  
			  </ul>
	  
		  <!-- Quiz question Tips -->
	  
	  </div>
	  
				</div>
				<div class="quiz_question_item_container" data-role="quiz_question57" data-position="11">
				  <div class=" clearfix" id="quiz_question-57">
	  
		  <h4 class="quiz_question">
			  
			  Question #5
		  </h4>
	  
		  <!-- Quiz question Body -->
		  <p><code>0x01 | 0x01 =</code> ?</p>
	  
	  
		  <!-- Quiz question Answers -->
			  <ul class="quiz_question_answers" data-question-id="57">
					  <li class="">
	  
		<input type="radio" name="57" id="57-1498499768473" value="1498499768473" data-quiz-answer-id="1498499768473" data-quiz-question-id="57" disabled="disabled" checked="checked">
		<label for="57-1498499768473"><p><code>0x01</code></p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="57" id="57-1498499765864" value="1498499765864" data-quiz-answer-id="1498499765864" data-quiz-question-id="57" disabled="disabled">
		<label for="57-1498499765864"><p><code>0x00</code></p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="57" id="57-1498499773629" value="1498499773629" data-quiz-answer-id="1498499773629" data-quiz-question-id="57" disabled="disabled">
		<label for="57-1498499773629"><p><code>0x02</code></p>
	  </label>
	  </li>
	  
			  </ul>
	  
		  <!-- Quiz question Tips -->
	  
	  </div>
	  
				</div>
				<div class="quiz_question_item_container" data-role="quiz_question56" data-position="10">
				  <div class=" clearfix" id="quiz_question-56">
	  
		  <h4 class="quiz_question">
			  
			  Question #6
		  </h4>
	  
		  <!-- Quiz question Body -->
		  <p><code>0x01 &amp; 0x01 =</code> ? </p>
	  
	  
		  <!-- Quiz question Answers -->
			  <ul class="quiz_question_answers" data-question-id="56">
					  <li class="">
	  
		<input type="radio" name="56" id="56-1498499745434" value="1498499745434" data-quiz-answer-id="1498499745434" data-quiz-question-id="56" disabled="disabled" checked="checked">
		<label for="56-1498499745434"><p><code>0x01</code></p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="56" id="56-1498499740509" value="1498499740509" data-quiz-answer-id="1498499740509" data-quiz-question-id="56" disabled="disabled">
		<label for="56-1498499740509"><p><code>0x00</code></p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="56" id="56-1498499748714" value="1498499748714" data-quiz-answer-id="1498499748714" data-quiz-question-id="56" disabled="disabled">
		<label for="56-1498499748714"><p><code>0x02</code></p>
	  </label>
	  </li>
	  
			  </ul>
	  
		  <!-- Quiz question Tips -->
	  
	  </div>
	  
				</div>
				<div class="quiz_question_item_container" data-role="quiz_question66" data-position="19">
				  <div class=" clearfix" id="quiz_question-66">
	  
		  <h4 class="quiz_question">
			  
			  Question #7
		  </h4>
	  
		  <!-- Quiz question Body -->
		  <p><code>0x89 &gt;&gt; 3 =</code> ?</p>
	  
	  
		  <!-- Quiz question Answers -->
			  <ul class="quiz_question_answers" data-question-id="66">
					  <li class="">
	  
		<input type="radio" name="66" id="66-1498502423098" value="1498502423098" data-quiz-answer-id="1498502423098" data-quiz-question-id="66" disabled="disabled">
		<label for="66-1498502423098"><p>0x44</p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="66" id="66-1498502473232" value="1498502473232" data-quiz-answer-id="1498502473232" data-quiz-question-id="66" disabled="disabled">
		<label for="66-1498502473232"><p>0x22</p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="66" id="66-1498502492053" value="1498502492053" data-quiz-answer-id="1498502492053" data-quiz-question-id="66" disabled="disabled" checked="checked">
		<label for="66-1498502492053"><p>0x11</p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="66" id="66-1498502406107" value="1498502406107" data-quiz-answer-id="1498502406107" data-quiz-question-id="66" disabled="disabled">
		<label for="66-1498502406107"><p>0x89</p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="66" id="66-1498502494513" value="1498502494513" data-quiz-answer-id="1498502494513" data-quiz-question-id="66" disabled="disabled">
		<label for="66-1498502494513"><p>0x08</p>
	  </label>
	  </li>
	  
			  </ul>
	  
		  <!-- Quiz question Tips -->
	  
	  </div>
	  
				</div>
				<div class="quiz_question_item_container" data-role="quiz_question63" data-position="16">
				  <div class=" clearfix" id="quiz_question-63">
	  
		  <h4 class="quiz_question">
			  
			  Question #8
		  </h4>
	  
		  <!-- Quiz question Body -->
		  <p><code>0x89 &amp; 0x01 =</code> ?</p>
	  
	  
		  <!-- Quiz question Answers -->
			  <ul class="quiz_question_answers" data-question-id="63">
					  <li class="">
	  
		<input type="radio" name="63" id="63-1498499847193" value="1498499847193" data-quiz-answer-id="1498499847193" data-quiz-question-id="63" disabled="disabled" checked="checked">
		<label for="63-1498499847193"><p><code>0x01</code></p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="63" id="63-1498499881925" value="1498499881925" data-quiz-answer-id="1498499881925" data-quiz-question-id="63" disabled="disabled">
		<label for="63-1498499881925"><p><code>0x00</code></p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="63" id="63-1498499853569" value="1498499853569" data-quiz-answer-id="1498499853569" data-quiz-question-id="63" disabled="disabled">
		<label for="63-1498499853569"><p><code>0x88</code></p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="63" id="63-1498499859585" value="1498499859585" data-quiz-answer-id="1498499859585" data-quiz-question-id="63" disabled="disabled">
		<label for="63-1498499859585"><p><code>0x89</code></p>
	  </label>
	  </li>
	  
			  </ul>
	  
		  <!-- Quiz question Tips -->
	  
	  </div>
	  
				</div>
				<div class="quiz_question_item_container" data-role="quiz_question58" data-position="12">
				  <div class=" clearfix" id="quiz_question-58">
	  
		  <h4 class="quiz_question">
			  
			  Question #9
		  </h4>
	  
		  <!-- Quiz question Body -->
		  <p><code>0x01 &amp; 0x00 =</code> ?</p>
	  
	  
		  <!-- Quiz question Answers -->
			  <ul class="quiz_question_answers" data-question-id="58">
					  <li class="">
	  
		<input type="radio" name="58" id="58-1498499782763" value="1498499782763" data-quiz-answer-id="1498499782763" data-quiz-question-id="58" disabled="disabled">
		<label for="58-1498499782763"><p><code>0x01</code></p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="58" id="58-1498499780172" value="1498499780172" data-quiz-answer-id="1498499780172" data-quiz-question-id="58" disabled="disabled" checked="checked">
		<label for="58-1498499780172"><p><code>0x00</code></p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="58" id="58-1498499787133" value="1498499787133" data-quiz-answer-id="1498499787133" data-quiz-question-id="58" disabled="disabled">
		<label for="58-1498499787133"><p><code>0x02</code></p>
	  </label>
	  </li>
	  
			  </ul>
	  
		  <!-- Quiz question Tips -->
	  
	  </div>
	  
				</div>
				<div class="quiz_question_item_container" data-role="quiz_question60" data-position="14">
				  <div class=" clearfix" id="quiz_question-60">
	  
		  <h4 class="quiz_question">
			  
			  Question #10
		  </h4>
	  
		  <!-- Quiz question Body -->
		  <p><code>0x66 &amp; 0x22 =</code> ?</p>
	  
	  
		  <!-- Quiz question Answers -->
			  <ul class="quiz_question_answers" data-question-id="60">
					  <li class="">
	  
		<input type="radio" name="60" id="60-1498499814750" value="1498499814750" data-quiz-answer-id="1498499814750" data-quiz-question-id="60" disabled="disabled">
		<label for="60-1498499814750"><p><code>0x44</code></p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="60" id="60-1498499807811" value="1498499807811" data-quiz-answer-id="1498499807811" data-quiz-question-id="60" disabled="disabled" checked="checked">
		<label for="60-1498499807811"><p><code>0x22</code></p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="60" id="60-1498499818361" value="1498499818361" data-quiz-answer-id="1498499818361" data-quiz-question-id="60" disabled="disabled">
		<label for="60-1498499818361"><p><code>0x66</code></p>
	  </label>
	  </li>
	  
			  </ul>
	  
		  <!-- Quiz question Tips -->
	  
	  </div>
	  
				</div>
				<div class="quiz_question_item_container" data-role="quiz_question67" data-position="20">
				  <div class=" clearfix" id="quiz_question-67">
	  
		  <h4 class="quiz_question">
			  
			  Question #11
		  </h4>
	  
		  <!-- Quiz question Body -->
		  <p><code>0x01 &lt;&lt; 1 =</code> ?</p>
	  
	  
		  <!-- Quiz question Answers -->
			  <ul class="quiz_question_answers" data-question-id="67">
					  <li class="">
	  
		<input type="radio" name="67" id="67-1498502515424" value="1498502515424" data-quiz-answer-id="1498502515424" data-quiz-question-id="67" disabled="disabled">
		<label for="67-1498502515424"><p>0x01</p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="67" id="67-1498502518237" value="1498502518237" data-quiz-answer-id="1498502518237" data-quiz-question-id="67" disabled="disabled" checked="checked">
		<label for="67-1498502518237"><p>0x02</p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="67" id="67-1498502520961" value="1498502520961" data-quiz-answer-id="1498502520961" data-quiz-question-id="67" disabled="disabled">
		<label for="67-1498502520961"><p>0x03</p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="67" id="67-1498502511861" value="1498502511861" data-quiz-answer-id="1498502511861" data-quiz-question-id="67" disabled="disabled">
		<label for="67-1498502511861"><p>0x00</p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="67" id="67-1498502525858" value="1498502525858" data-quiz-answer-id="1498502525858" data-quiz-question-id="67" disabled="disabled">
		<label for="67-1498502525858"><p>0x10</p>
	  </label>
	  </li>
	  
			  </ul>
	  
		  <!-- Quiz question Tips -->
	  
	  </div>
	  
				</div>
				<div class="quiz_question_item_container" data-role="quiz_question64" data-position="17">
				  <div class=" clearfix" id="quiz_question-64">
	  
		  <h4 class="quiz_question">
			  
			  Question #12
		  </h4>
	  
		  <!-- Quiz question Body -->
		  <p><code>0x88 &amp; 0x01 =</code> ?</p>
	  
	  
		  <!-- Quiz question Answers -->
			  <ul class="quiz_question_answers" data-question-id="64">
					  <li class="">
	  
		<input type="radio" name="64" id="64-1498499872807" value="1498499872807" data-quiz-answer-id="1498499872807" data-quiz-question-id="64" disabled="disabled">
		<label for="64-1498499872807"><p><code>0x01</code></p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="64" id="64-1498499866824" value="1498499866824" data-quiz-answer-id="1498499866824" data-quiz-question-id="64" disabled="disabled" checked="checked">
		<label for="64-1498499866824"><p><code>0x00</code></p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="64" id="64-1498499895977" value="1498499895977" data-quiz-answer-id="1498499895977" data-quiz-question-id="64" disabled="disabled">
		<label for="64-1498499895977"><p><code>0x88</code></p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="64" id="64-1498499910397" value="1498499910397" data-quiz-answer-id="1498499910397" data-quiz-question-id="64" disabled="disabled">
		<label for="64-1498499910397"><p><code>0x89</code></p>
	  </label>
	  </li>
	  
			  </ul>
	  
		  <!-- Quiz question Tips -->
	  
	  </div>
	  
				</div>
				<div class="quiz_question_item_container" data-role="quiz_question65" data-position="18">
				  <div class=" clearfix" id="quiz_question-65">
	  
		  <h4 class="quiz_question">
			  
			  Question #13
		  </h4>
	  
		  <!-- Quiz question Body -->
		  <p><code>0x02 &gt;&gt; 1 =</code> ?</p>
	  
	  
		  <!-- Quiz question Answers -->
			  <ul class="quiz_question_answers" data-question-id="65">
					  <li class="">
	  
		<input type="radio" name="65" id="65-1498502387369" value="1498502387369" data-quiz-answer-id="1498502387369" data-quiz-question-id="65" disabled="disabled" checked="checked">
		<label for="65-1498502387369"><p>0x01</p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="65" id="65-1498502382879" value="1498502382879" data-quiz-answer-id="1498502382879" data-quiz-question-id="65" disabled="disabled">
		<label for="65-1498502382879"><p>0x02</p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="65" id="65-1498502391008" value="1498502391008" data-quiz-answer-id="1498502391008" data-quiz-question-id="65" disabled="disabled">
		<label for="65-1498502391008"><p>0x00</p>
	  </label>
	  </li>
	  
			  </ul>
	  
		  <!-- Quiz question Tips -->
	  
	  </div>
	  
				</div>
				<div class="quiz_question_item_container" data-role="quiz_question68" data-position="21">
				  <div class=" clearfix" id="quiz_question-68">
	  
		  <h4 class="quiz_question">
			  
			  Question #14
		  </h4>
	  
		  <!-- Quiz question Body -->
		  <p><code>0x13 &lt;&lt; 1 =</code> ?</p>
	  
	  
		  <!-- Quiz question Answers -->
			  <ul class="quiz_question_answers" data-question-id="68">
					  <li class="">
	  
		<input type="radio" name="68" id="68-1498502554131" value="1498502554131" data-quiz-answer-id="1498502554131" data-quiz-question-id="68" disabled="disabled" checked="checked">
		<label for="68-1498502554131"><p>0x26</p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="68" id="68-1498502540619" value="1498502540619" data-quiz-answer-id="1498502540619" data-quiz-question-id="68" disabled="disabled">
		<label for="68-1498502540619"><p>0x13</p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="68" id="68-1498502563290" value="1498502563290" data-quiz-answer-id="1498502563290" data-quiz-question-id="68" disabled="disabled">
		<label for="68-1498502563290"><p>0x4C </p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="68" id="68-1498502568612" value="1498502568612" data-quiz-answer-id="1498502568612" data-quiz-question-id="68" disabled="disabled">
		<label for="68-1498502568612"><p>0x98</p>
	  </label>
	  </li>
	  
			  </ul>
	  
		  <!-- Quiz question Tips -->
	  
	  </div>
	  
				</div>
				<div class="quiz_question_item_container" data-role="quiz_question69" data-position="22">
				  <div class=" clearfix" id="quiz_question-69">
	  
		  <h4 class="quiz_question">
			  
			  Question #15
		  </h4>
	  
		  <!-- Quiz question Body -->
		  <p><code>~ 0x12 =</code> ?</p>
	  
	  
		  <!-- Quiz question Answers -->
			  <ul class="quiz_question_answers" data-question-id="69">
					  <li class="">
	  
		<input type="radio" name="69" id="69-1498502664164" value="1498502664164" data-quiz-answer-id="1498502664164" data-quiz-question-id="69" disabled="disabled">
		<label for="69-1498502664164"><p>0xFD</p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="69" id="69-1498502638900" value="1498502638900" data-quiz-answer-id="1498502638900" data-quiz-question-id="69" disabled="disabled" checked="checked">
		<label for="69-1498502638900"><p>0xED</p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="69" id="69-1498502671019" value="1498502671019" data-quiz-answer-id="1498502671019" data-quiz-question-id="69" disabled="disabled">
		<label for="69-1498502671019"><p>0xEE</p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="69" id="69-1498502679650" value="1498502679650" data-quiz-answer-id="1498502679650" data-quiz-question-id="69" disabled="disabled">
		<label for="69-1498502679650"><p>0x21</p>
	  </label>
	  </li>
	  
			  </ul>
	  
		  <!-- Quiz question Tips -->
	  
	  </div>
	  
				</div>
				<div class="quiz_question_item_container" data-role="quiz_question75" data-position="5">
				  <div class=" clearfix" id="quiz_question-75">
	  
		  <h4 class="quiz_question">
			  
			  Question #16
		  </h4>
	  
		  <!-- Quiz question Body -->
		  <p>What is <code>98</code> in base2?</p>
	  
	  
		  <!-- Quiz question Answers -->
			  <ul class="quiz_question_answers" data-question-id="75">
					  <li class="">
	  
		<input type="radio" name="75" id="75-1498502992072" value="1498502992072" data-quiz-answer-id="1498502992072" data-quiz-question-id="75" disabled="disabled" checked="checked">
		<label for="75-1498502992072"><p>0b01100010</p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="75" id="75-1498502940119" value="1498502940119" data-quiz-answer-id="1498502940119" data-quiz-question-id="75" disabled="disabled">
		<label for="75-1498502940119"><p>0b01010010</p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="75" id="75-1498502996302" value="1498502996302" data-quiz-answer-id="1498502996302" data-quiz-question-id="75" disabled="disabled">
		<label for="75-1498502996302"><p>0b10011000</p>
	  </label>
	  </li>
	  
			  </ul>
	  
		  <!-- Quiz question Tips -->
	  
	  </div>
	  
				</div>
				<div class="quiz_question_item_container" data-role="quiz_question70" data-position="23">
				  <div class=" clearfix" id="quiz_question-70">
	  
		  <h4 class="quiz_question">
			  
			  Question #17
		  </h4>
	  
		  <!-- Quiz question Body -->
		  <p><code>~ 0x98 =</code> ?</p>
	  
	  
		  <!-- Quiz question Answers -->
			  <ul class="quiz_question_answers" data-question-id="70">
					  <li class="">
	  
		<input type="radio" name="70" id="70-1498502725521" value="1498502725521" data-quiz-answer-id="1498502725521" data-quiz-question-id="70" disabled="disabled" checked="checked">
		<label for="70-1498502725521"><p>0x67</p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="70" id="70-1498502693792" value="1498502693792" data-quiz-answer-id="1498502693792" data-quiz-question-id="70" disabled="disabled">
		<label for="70-1498502693792"><p>0x66</p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="70" id="70-1498502728031" value="1498502728031" data-quiz-answer-id="1498502728031" data-quiz-question-id="70" disabled="disabled">
		<label for="70-1498502728031"><p>0x68</p>
	  </label>
	  </li>
	  
			  </ul>
	  
		  <!-- Quiz question Tips -->
	  
	  </div>
	  
				</div>
				<div class="quiz_question_item_container" data-role="quiz_question61" data-position="15">
				  <div class=" clearfix" id="quiz_question-61">
	  
		  <h4 class="quiz_question">
			  
			  Question #18
		  </h4>
	  
		  <!-- Quiz question Body -->
		  <p><code>0x44 | 0x22 =</code> ?</p>
	  
	  
		  <!-- Quiz question Answers -->
			  <ul class="quiz_question_answers" data-question-id="61">
					  <li class="">
	  
		<input type="radio" name="61" id="61-1498499827006" value="1498499827006" data-quiz-answer-id="1498499827006" data-quiz-question-id="61" disabled="disabled">
		<label for="61-1498499827006"><p><code>0x44</code></p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="61" id="61-1498499824504" value="1498499824504" data-quiz-answer-id="1498499824504" data-quiz-question-id="61" disabled="disabled">
		<label for="61-1498499824504"><p><code>0x22</code></p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="61" id="61-1498499830204" value="1498499830204" data-quiz-answer-id="1498499830204" data-quiz-question-id="61" disabled="disabled" checked="checked">
		<label for="61-1498499830204"><p><code>0x66</code></p>
	  </label>
	  </li>
	  
			  </ul>
	  
		  <!-- Quiz question Tips -->
	  
	  </div>
	  
				</div>
				<div class="quiz_question_item_container" data-role="quiz_question74" data-position="4">
				  <div class=" clearfix" id="quiz_question-74">
	  
		  <h4 class="quiz_question">
			  
			  Question #19
		  </h4>
	  
		  <!-- Quiz question Body -->
		  <p>What is <code>0b01101101</code> in base16?</p>
	  
	  
		  <!-- Quiz question Answers -->
			  <ul class="quiz_question_answers" data-question-id="74">
					  <li class="">
	  
		<input type="radio" name="74" id="74-1498502277211" value="1498502277211" data-quiz-answer-id="1498502277211" data-quiz-question-id="74" disabled="disabled" checked="checked">
		<label for="74-1498502277211"><p>0x6D</p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="74" id="74-1498502280804" value="1498502280804" data-quiz-answer-id="1498502280804" data-quiz-question-id="74" disabled="disabled">
		<label for="74-1498502280804"><p>0x6E</p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="74" id="74-1498502284115" value="1498502284115" data-quiz-answer-id="1498502284115" data-quiz-question-id="74" disabled="disabled">
		<label for="74-1498502284115"><p>0x7D</p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="74" id="74-1498501866934" value="1498501866934" data-quiz-answer-id="1498501866934" data-quiz-question-id="74" disabled="disabled">
		<label for="74-1498501866934"><p>0x36</p>
	  </label>
	  </li>
	  
					  <li class="">
	  
		<input type="radio" name="74" id="74-1498502287965" value="1498502287965" data-quiz-answer-id="1498502287965" data-quiz-question-id="74" disabled="disabled">
		<label for="74-1498502287965"><p>0xD6</p>
	  </label>
	  </li>
	  
			  </ul>
	  
		  <!-- Quiz question Tips -->
	  
	  </div>
	  
				</div>
	  
			</section>
		  </div>
		</div>
	  
	  
			  
				<h2 class="gap">Tasks</h2>
	  
		  <div data-role="task1008" data-position="1" id="task-num-0">
			<div class="panel panel-default task-card " id="task-1008">
		<span id="user_id" data-id="488834"></span>
	  
		<div class="panel-heading panel-heading-actions">
		  <h3 class="panel-title">
			0. 0
		  </h3>
	  
		  <div>
			  <span class="label label-info">
				mandatory
			  </span>
		  </div>
		</div>
	  
		<div class="panel-body">
		  <span id="user_id" data-id="488834"></span>
	  
		  <!-- Progress vs Score -->
	  
		  <!-- Task Body -->
		  <p>Write a function that converts a binary number to an <code>unsigned int</code>.</p>
	  
	  <ul>
	  <li>Prototype: <code>unsigned int binary_to_uint(const char *b);</code></li>
	  <li>where <code>b</code> is pointing to a string of <code>0</code> and <code>1</code> chars</li>
	  <li>Return: the converted number, or 0 if
	  
	  <ul>
	  <li>there is one or more chars in the string <code>b</code> that is not <code>0</code> or <code>1</code></li>
	  <li><code>b</code> is <code>NULL</code></li>
	  </ul></li>
	  </ul>
	  
	  <pre><code>julien@ubuntu:~/0x14. Binary$ cat 0-main.c
	  #include &lt;stdio.h&gt;
	  #include "main.h"
	  
	  /**
	   * main - check the code
	   *
	   * Return: Always 0.
	   */
	  int main(void)
	  {
		  unsigned int n;
	  
		  n = binary_to_uint("1");
		  printf("%u\n", n);
		  n = binary_to_uint("101");
		  printf("%u\n", n);
		  n = binary_to_uint("1e01");
		  printf("%u\n", n);
		  n = binary_to_uint("1100010");
		  printf("%u\n", n);
		  n = binary_to_uint("0000000000000000000110010010");
		  printf("%u\n", n);
		  return (0);
	  }
	  julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o a
	  julien@ubuntu:~/0x14. Binary$ ./a 
	  1
	  5
	  0
	  98
	  402
	  julien@ubuntu:~/0x14. Binary$ 
	  </code></pre>
	  
		</div>
	  
		<div class="list-group">
		  <!-- Task URLs -->
	  
		  <!-- Github information -->
			<div class="list-group-item">
			  <p><strong>Repo:</strong></p>
			  <ul>
				<li>GitHub repository: <code>alx-low_level_programming</code></li>
				  <li>Directory: <code>0x14-bit_manipulation</code></li>
				  <li>File: <code>0-binary_to_uint.c</code></li>
			  </ul>
			</div>
	  
		  <!-- Self-paced manual review -->
		</div>
	  
		<!-- Panel footer - Controls -->
		<div class="panel-footer">
			<div class="align-items-center d-flex justify-content-between">
			  
	  <div>
		  <button class="student_task_done btn btn-default btn-sm no" data-task-id="1008">
			<span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
			<span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
			<span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
			Done<span class="no pending">?</span><span class="yes">!</span>
		  </button>
	  
		<button class="student-task-done-by btn btn-default btn-sm" data-task-id="1008" data-batch-id="99" data-toggle="modal" data-target="#task-1008-users-done-modal">
		  Help
		</button>
		<div class="modal fade users-done-modal" id="task-1008-users-done-modal" data-task-id="1008" data-batch-id="99">
		  <div class="modal-dialog">
			  <div class="modal-content">
			  <div class="modal-header">
				  <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
				  <h4 class="modal-title">Learners who are done with "0. 0"</h4>
			  </div>
			  <div class="modal-body">
				  <div class="list-group">
				  </div>
				  <div class="spinner">
					  <div class="bounce1"></div>
					  <div class="bounce2"></div>
					  <div class="bounce3"></div>
				  </div>
				  <div class="error"></div>
			  </div>
			  </div>
		  </div>
	  </div>
	  
	  
			<button class="btn btn-default btn-sm check-your-task-1008-modal-button" data-task-id="1008" data-toggle="modal" data-target="#task-test-correction-1008-correction-modal" id="task-num-0-check-code-btn" data-gtm-custom-event-name="task_checker_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:1008}">
				Check your code
			</button>
			<div class="modal fade task_correction_modal student_modal" id="task-test-correction-1008-correction-modal">
		  <div class="modal-dialog">
			  <div class="modal-content">
				  <div class="modal-header">
					  <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
					  <h4 class="modal-title">Correction of "0. 0"</h4>
				  </div>
				  <div class="modal-body">
					  <div class="actions">
						  <center>
							  <div class="alert alert-info hidden"></div>
	  
							  <button name="button" type="submit" class="btn btn-primary correction_request_test_send" data-task-id="1008">Start a new test</button>
							  <button class="btn btn-default close-modal hidden" data-dismiss="modal" type="button">Close</button>
	  
							  <div class="spinner" style="display: none;">
								  <div class="bounce1"></div>
								  <div class="bounce2"></div>
								  <div class="bounce3"></div>
							  </div>
							  <div class="error"></div>
							  <div class="info"></div>
						  </center>
					  </div>
					  <div class="result"></div>
	  
					  <div class="help">
		  <button data-task-id="1008">
			  <i aria-hidden="true" class="fa fa-info-circle "></i>
		  </button>
		  <div class="help-container" data-task-id="1008">
			  <div class="check-line">
				  <div class="check-inline requirement success">
					  <i aria-hidden="true" class="fa fa-check-circle "></i>
					  Requirement success
				  </div>
				  <div class="check-inline requirement fail">
					  <i aria-hidden="true" class="fa fa-times-circle "></i>
					  Requirement fail
				  </div>
			  </div>
			  <div class="check-line">
				  <div class="check-inline code success">
					  <i aria-hidden="true" class="fa fa-check-circle "></i>
					  Code success
				  </div>
				  <div class="check-inline code fail">
					  <i aria-hidden="true" class="fa fa-times-circle "></i>
					  Code fail
				  </div>
			  </div>
			  <div class="check-line">
				  <div class="check-inline efficiency success">
					  <i aria-hidden="true" class="fa fa-check-circle "></i>
					  Efficiency success
				  </div>
				  <div class="check-inline efficiency fail">
					  <i aria-hidden="true" class="fa fa-times-circle "></i>
					  Efficiency fail
				  </div>
			  </div>
			  <div class="check-line">
				  <div class="check-inline answer success">
					  <i aria-hidden="true" class="fa fa-check-circle "></i>
					  Text answer success
				  </div>
				  <div class="check-inline answer fail">
					  <i aria-hidden="true" class="fa fa-times-circle "></i>
					  Text answer fail
				  </div>
			  </div>
			  <div class="check-line">
				  <div class="check-inline requirement fail offline">
					  <i aria-hidden="true" class="fa fa-times-circle "></i>
					  Skipped - Previous check failed
				  </div>
			  </div>
		  </div>
	  </div>
	  
				  </div>
			  </div>
		  </div>
	  </div>
	  
	  
	  
		  
	  
	  </div>
	  
	  
			  <div class="fs-4">
			  </div>
			</div>
	  
	  
		</div>
	  </div>
	  
		  </div>
		  <div data-role="task1009" data-position="2" id="task-num-1">
			<div class="panel panel-default task-card " id="task-1009">
		<span id="user_id" data-id="488834"></span>
	  
		<div class="panel-heading panel-heading-actions">
		  <h3 class="panel-title">
			1. 1
		  </h3>
	  
		  <div>
			  <span class="label label-info">
				mandatory
			  </span>
		  </div>
		</div>
	  
		<div class="panel-body">
		  <span id="user_id" data-id="488834"></span>
	  
		  <!-- Progress vs Score -->
	  
		  <!-- Task Body -->
		  <p>Write a function that prints the binary representation of a number.</p>
	  
	  <ul>
	  <li>Prototype: <code>void print_binary(unsigned long int n);</code></li>
	  <li>Format: see example</li>
	  <li>You are not allowed to use arrays</li>
	  <li>You are not allowed to use <code>malloc</code></li>
	  <li>You are not allowed to use the <code>%</code> or <code>/</code> operators</li>
	  </ul>
	  
	  <pre><code>julien@ubuntu:~/0x14. Binary$ cat 1-main.c 
	  #include &lt;stdio.h&gt;
	  #include "main.h"
	  
	  /**
	   * main - check the code
	   *
	   * Return: Always 0.
	   */
	  int main(void)
	  {
		  print_binary(0);
		  printf("\n");
		  print_binary(1);
		  printf("\n");
		  print_binary(98);
		  printf("\n");
		  print_binary(1024);
		  printf("\n");
		  print_binary((1 &lt;&lt; 10) + 1);
		  printf("\n");
		  return (0);
	  }
	  julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_binary.c _putchar.c -o b
	  julien@ubuntu:~/0x14. Binary$ ./b 
	  0
	  1
	  1100010
	  10000000000
	  10000000001
	  julien@ubuntu:~/0x14. Binary$ 
	  </code></pre>
	  
		</div>
	  
		<div class="list-group">
		  <!-- Task URLs -->
	  
		  <!-- Github information -->
			<div class="list-group-item">
			  <p><strong>Repo:</strong></p>
			  <ul>
				<li>GitHub repository: <code>alx-low_level_programming</code></li>
				  <li>Directory: <code>0x14-bit_manipulation</code></li>
				  <li>File: <code>1-print_binary.c</code></li>
			  </ul>
			</div>
	  
		  <!-- Self-paced manual review -->
		</div>
	  
		<!-- Panel footer - Controls -->
		<div class="panel-footer">
			<div class="align-items-center d-flex justify-content-between">
			  
	  <div>
		  <button class="student_task_done btn btn-default btn-sm no" data-task-id="1009">
			<span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
			<span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
			<span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
			Done<span class="no pending">?</span><span class="yes">!</span>
		  </button>
	  
		<button class="student-task-done-by btn btn-default btn-sm" data-task-id="1009" data-batch-id="99" data-toggle="modal" data-target="#task-1009-users-done-modal">
		  Help
		</button>
		<div class="modal fade users-done-modal" id="task-1009-users-done-modal" data-task-id="1009" data-batch-id="99">
		  <div class="modal-dialog">
			  <div class="modal-content">
			  <div class="modal-header">
				  <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
				  <h4 class="modal-title">Learners who are done with "1. 1"</h4>
			  </div>
			  <div class="modal-body">
				  <div class="list-group">
				  </div>
				  <div class="spinner">
					  <div class="bounce1"></div>
					  <div class="bounce2"></div>
					  <div class="bounce3"></div>
				  </div>
				  <div class="error"></div>
			  </div>
			  </div>
		  </div>
	  </div>
	  
	  
			<button class="btn btn-default btn-sm check-your-task-1009-modal-button" data-task-id="1009" data-toggle="modal" data-target="#task-test-correction-1009-correction-modal" id="task-num-1-check-code-btn" data-gtm-custom-event-name="task_checker_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:1009}">
				Check your code
			</button>
			<div class="modal fade task_correction_modal student_modal" id="task-test-correction-1009-correction-modal">
		  <div class="modal-dialog">
			  <div class="modal-content">
				  <div class="modal-header">
					  <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
					  <h4 class="modal-title">Correction of "1. 1"</h4>
				  </div>
				  <div class="modal-body">
					  <div class="actions">
						  <center>
							  <div class="alert alert-info hidden"></div>
	  
							  <button name="button" type="submit" class="btn btn-primary correction_request_test_send" data-task-id="1009">Start a new test</button>
							  <button class="btn btn-default close-modal hidden" data-dismiss="modal" type="button">Close</button>
	  
							  <div class="spinner" style="display: none;">
								  <div class="bounce1"></div>
								  <div class="bounce2"></div>
								  <div class="bounce3"></div>
							  </div>
							  <div class="error"></div>
							  <div class="info"></div>
						  </center>
					  </div>
					  <div class="result"></div>
	  
					  <div class="help">
		  <button data-task-id="1009">
			  <i aria-hidden="true" class="fa fa-info-circle "></i>
		  </button>
		  <div class="help-container" data-task-id="1009">
			  <div class="check-line">
				  <div class="check-inline requirement success">
					  <i aria-hidden="true" class="fa fa-check-circle "></i>
					  Requirement success
				  </div>
				  <div class="check-inline requirement fail">
					  <i aria-hidden="true" class="fa fa-times-circle "></i>
					  Requirement fail
				  </div>
			  </div>
			  <div class="check-line">
				  <div class="check-inline code success">
					  <i aria-hidden="true" class="fa fa-check-circle "></i>
					  Code success
				  </div>
				  <div class="check-inline code fail">
					  <i aria-hidden="true" class="fa fa-times-circle "></i>
					  Code fail
				  </div>
			  </div>
			  <div class="check-line">
				  <div class="check-inline efficiency success">
					  <i aria-hidden="true" class="fa fa-check-circle "></i>
					  Efficiency success
				  </div>
				  <div class="check-inline efficiency fail">
					  <i aria-hidden="true" class="fa fa-times-circle "></i>
					  Efficiency fail
				  </div>
			  </div>
			  <div class="check-line">
				  <div class="check-inline answer success">
					  <i aria-hidden="true" class="fa fa-check-circle "></i>
					  Text answer success
				  </div>
				  <div class="check-inline answer fail">
					  <i aria-hidden="true" class="fa fa-times-circle "></i>
					  Text answer fail
				  </div>
			  </div>
			  <div class="check-line">
				  <div class="check-inline requirement fail offline">
					  <i aria-hidden="true" class="fa fa-times-circle "></i>
					  Skipped - Previous check failed
				  </div>
			  </div>
		  </div>
	  </div>
	  
				  </div>
			  </div>
		  </div>
	  </div>
	  
	  
	  
		  
	  
	  </div>
	  
	  
			  <div class="fs-4">
			  </div>
			</div>
	  
	  
		</div>
	  </div>
	  
		  </div>
		  <div data-role="task1011" data-position="3" id="task-num-2">
			<div class="panel panel-default task-card " id="task-1011">
		<span id="user_id" data-id="488834"></span>
	  
		<div class="panel-heading panel-heading-actions">
		  <h3 class="panel-title">
			2. 10
		  </h3>
	  
		  <div>
			  <span class="label label-info">
				mandatory
			  </span>
		  </div>
		</div>
	  
		<div class="panel-body">
		  <span id="user_id" data-id="488834"></span>
	  
		  <!-- Progress vs Score -->
	  
		  <!-- Task Body -->
		  <p>Write a function that returns the value of a bit at a given index.</p>
	  
	  <ul>
	  <li>Prototype: <code>int get_bit(unsigned long int n, unsigned int index);</code></li>
	  <li>where <code>index</code> is the index, starting from <code>0</code> of the bit you want to get</li>
	  <li>Returns: the value of the bit at index <code>index</code> or <code>-1</code> if an error occured</li>
	  </ul>
	  
	  <pre><code>julien@ubuntu:~/0x14. Binary$ cat 2-main.c
	  #include &lt;stdio.h&gt;
	  #include "main.h"
	  
	  /**
	   * main - check the code
	   *
	   * Return: Always 0.
	   */
	  int main(void)
	  {
		  int n;
	  
		  n = get_bit(1024, 10);
		  printf("%d\n", n);
		  n = get_bit(98, 1);
		  printf("%d\n", n);
		  n = get_bit(1024, 0);
		  printf("%d\n", n);
		  return (0);
	  }
	  julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-get_bit.c -o c  
	  julien@ubuntu:~/0x14. Binary$ ./c
	  1
	  1
	  0
	  julien@ubuntu:~/0x14. Binary$ 
	  </code></pre>
	  
		</div>
	  
		<div class="list-group">
		  <!-- Task URLs -->
	  
		  <!-- Github information -->
			<div class="list-group-item">
			  <p><strong>Repo:</strong></p>
			  <ul>
				<li>GitHub repository: <code>alx-low_level_programming</code></li>
				  <li>Directory: <code>0x14-bit_manipulation</code></li>
				  <li>File: <code>2-get_bit.c</code></li>
			  </ul>
			</div>
	  
		  <!-- Self-paced manual review -->
		</div>
	  
		<!-- Panel footer - Controls -->
		<div class="panel-footer">
			<div class="align-items-center d-flex justify-content-between">
			  
	  <div>
		  <button class="student_task_done btn btn-default btn-sm no" data-task-id="1011">
			<span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
			<span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
			<span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
			Done<span class="no pending">?</span><span class="yes">!</span>
		  </button>
	  
		<button class="student-task-done-by btn btn-default btn-sm" data-task-id="1011" data-batch-id="99" data-toggle="modal" data-target="#task-1011-users-done-modal">
		  Help
		</button>
		<div class="modal fade users-done-modal" id="task-1011-users-done-modal" data-task-id="1011" data-batch-id="99">
		  <div class="modal-dialog">
			  <div class="modal-content">
			  <div class="modal-header">
				  <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
				  <h4 class="modal-title">Learners who are done with "2. 10"</h4>
			  </div>
			  <div class="modal-body">
				  <div class="list-group">
				  </div>
				  <div class="spinner">
					  <div class="bounce1"></div>
					  <div class="bounce2"></div>
					  <div class="bounce3"></div>
				  </div>
				  <div class="error"></div>
			  </div>
			  </div>
		  </div>
	  </div>
	  
	  
			<button class="btn btn-default btn-sm check-your-task-1011-modal-button" data-task-id="1011" data-toggle="modal" data-target="#task-test-correction-1011-correction-modal" id="task-num-2-check-code-btn" data-gtm-custom-event-name="task_checker_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:1011}">
				Check your code
			</button>
			<div class="modal fade task_correction_modal student_modal" id="task-test-correction-1011-correction-modal">
		  <div class="modal-dialog">
			  <div class="modal-content">
				  <div class="modal-header">
					  <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
					  <h4 class="modal-title">Correction of "2. 10"</h4>
				  </div>
				  <div class="modal-body">
					  <div class="actions">
						  <center>
							  <div class="alert alert-info hidden"></div>
	  
							  <button name="button" type="submit" class="btn btn-primary correction_request_test_send" data-task-id="1011">Start a new test</button>
							  <button class="btn btn-default close-modal hidden" data-dismiss="modal" type="button">Close</button>
	  
							  <div class="spinner" style="display: none;">
								  <div class="bounce1"></div>
								  <div class="bounce2"></div>
								  <div class="bounce3"></div>
							  </div>
							  <div class="error"></div>
							  <div class="info"></div>
						  </center>
					  </div>
					  <div class="result"></div>
	  
					  <div class="help">
		  <button data-task-id="1011">
			  <i aria-hidden="true" class="fa fa-info-circle "></i>
		  </button>
		  <div class="help-container" data-task-id="1011">
			  <div class="check-line">
				  <div class="check-inline requirement success">
					  <i aria-hidden="true" class="fa fa-check-circle "></i>
					  Requirement success
				  </div>
				  <div class="check-inline requirement fail">
					  <i aria-hidden="true" class="fa fa-times-circle "></i>
					  Requirement fail
				  </div>
			  </div>
			  <div class="check-line">
				  <div class="check-inline code success">
					  <i aria-hidden="true" class="fa fa-check-circle "></i>
					  Code success
				  </div>
				  <div class="check-inline code fail">
					  <i aria-hidden="true" class="fa fa-times-circle "></i>
					  Code fail
				  </div>
			  </div>
			  <div class="check-line">
				  <div class="check-inline efficiency success">
					  <i aria-hidden="true" class="fa fa-check-circle "></i>
					  Efficiency success
				  </div>
				  <div class="check-inline efficiency fail">
					  <i aria-hidden="true" class="fa fa-times-circle "></i>
					  Efficiency fail
				  </div>
			  </div>
			  <div class="check-line">
				  <div class="check-inline answer success">
					  <i aria-hidden="true" class="fa fa-check-circle "></i>
					  Text answer success
				  </div>
				  <div class="check-inline answer fail">
					  <i aria-hidden="true" class="fa fa-times-circle "></i>
					  Text answer fail
				  </div>
			  </div>
			  <div class="check-line">
				  <div class="check-inline requirement fail offline">
					  <i aria-hidden="true" class="fa fa-times-circle "></i>
					  Skipped - Previous check failed
				  </div>
			  </div>
		  </div>
	  </div>
	  
				  </div>
			  </div>
		  </div>
	  </div>
	  
	  
	  
		  
	  
	  </div>
	  
	  
			  <div class="fs-4">
			  </div>
			</div>
	  
	  
		</div>
	  </div>
	  
		  </div>
		  <div data-role="task1016" data-position="4" id="task-num-3">
			<div class="panel panel-default task-card " id="task-1016">
		<span id="user_id" data-id="488834"></span>
	  
		<div class="panel-heading panel-heading-actions">
		  <h3 class="panel-title">
			3. 11
		  </h3>
	  
		  <div>
			  <span class="label label-info">
				mandatory
			  </span>
		  </div>
		</div>
	  
		<div class="panel-body">
		  <span id="user_id" data-id="488834"></span>
	  
		  <!-- Progress vs Score -->
	  
		  <!-- Task Body -->
		  <p>Write a function that sets the value of a bit to <code>1</code> at a given index.</p>
	  
	  <ul>
	  <li>Prototype: <code>int set_bit(unsigned long int *n, unsigned int index);</code></li>
	  <li>where <code>index</code> is the index, starting from <code>0</code> of the bit you want to set</li>
	  <li>Returns: <code>1</code> if it worked, or <code>-1</code> if an error occurred</li>
	  </ul>
	  
	  <pre><code>julien@ubuntu:~/0x14. Binary$ cat 3-main.c
	  #include &lt;stdio.h&gt;
	  #include "main.h"
	  
	  /**
	   * main - check the code
	   *
	   * Return: Always 0.
	   */
	  int main(void)
	  {
		  unsigned long int n;
	  
		  n = 1024;
		  set_bit(&amp;n, 5);
		  printf("%lu\n", n);
		  n = 0;
		  set_bit(&amp;n, 10);
		  printf("%lu\n", n);
		  n = 98;
		  set_bit(&amp;n, 0);
		  printf("%lu\n", n);
		  return (0);
	  }
	  julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-set_bit.c -o d
	  julien@ubuntu:~/0x14. Binary$ ./d
	  1056
	  1024
	  99
	  julien@ubuntu:~/0x14. Binary$ 
	  </code></pre>
	  
		</div>
	  
		<div class="list-group">
		  <!-- Task URLs -->
	  
		  <!-- Github information -->
			<div class="list-group-item">
			  <p><strong>Repo:</strong></p>
			  <ul>
				<li>GitHub repository: <code>alx-low_level_programming</code></li>
				  <li>Directory: <code>0x14-bit_manipulation</code></li>
				  <li>File: <code>3-set_bit.c</code></li>
			  </ul>
			</div>
	  
		  <!-- Self-paced manual review -->
		</div>
	  
		<!-- Panel footer - Controls -->
		<div class="panel-footer">
			<div class="align-items-center d-flex justify-content-between">
			  
	  <div>
		  <button class="student_task_done btn btn-default btn-sm no" data-task-id="1016">
			<span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
			<span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
			<span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
			Done<span class="no pending">?</span><span class="yes">!</span>
		  </button>
	  
		<button class="student-task-done-by btn btn-default btn-sm" data-task-id="1016" data-batch-id="99" data-toggle="modal" data-target="#task-1016-users-done-modal">
		  Help
		</button>
		<div class="modal fade users-done-modal" id="task-1016-users-done-modal" data-task-id="1016" data-batch-id="99">
		  <div class="modal-dialog">
			  <div class="modal-content">
			  <div class="modal-header">
				  <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
				  <h4 class="modal-title">Learners who are done with "3. 11"</h4>
			  </div>
			  <div class="modal-body">
				  <div class="list-group">
				  </div>
				  <div class="spinner">
					  <div class="bounce1"></div>
					  <div class="bounce2"></div>
					  <div class="bounce3"></div>
				  </div>
				  <div class="error"></div>
			  </div>
			  </div>
		  </div>
	  </div>
	  
	  
			<button class="btn btn-default btn-sm check-your-task-1016-modal-button" data-task-id="1016" data-toggle="modal" data-target="#task-test-correction-1016-correction-modal" id="task-num-3-check-code-btn" data-gtm-custom-event-name="task_checker_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:1016}">
				Check your code
			</button>
			<div class="modal fade task_correction_modal student_modal" id="task-test-correction-1016-correction-modal">
		  <div class="modal-dialog">
			  <div class="modal-content">
				  <div class="modal-header">
					  <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
					  <h4 class="modal-title">Correction of "3. 11"</h4>
				  </div>
				  <div class="modal-body">
					  <div class="actions">
						  <center>
							  <div class="alert alert-info hidden"></div>
	  
							  <button name="button" type="submit" class="btn btn-primary correction_request_test_send" data-task-id="1016">Start a new test</button>
							  <button class="btn btn-default close-modal hidden" data-dismiss="modal" type="button">Close</button>
	  
							  <div class="spinner" style="display: none;">
								  <div class="bounce1"></div>
								  <div class="bounce2"></div>
								  <div class="bounce3"></div>
							  </div>
							  <div class="error"></div>
							  <div class="info"></div>
						  </center>
					  </div>
					  <div class="result"></div>
					  <div class="help">
		  <button data-task-id="1016">
			  <i aria-hidden="true" class="fa fa-info-circle "></i>
		  </button>
		  <div class="help-container" data-task-id="1016">
			  <div class="check-line">
				  <div class="check-inline requirement success">
					  <i aria-hidden="true" class="fa fa-check-circle "></i>
					  Requirement success
				  </div>
				  <div class="check-inline requirement fail">
					  <i aria-hidden="true" class="fa fa-times-circle "></i>
					  Requirement fail
				  </div>
			  </div>
			  <div class="check-line">
				  <div class="check-inline code success">
					  <i aria-hidden="true" class="fa fa-check-circle "></i>
					  Code success
				  </div>
				  <div class="check-inline code fail">
					  <i aria-hidden="true" class="fa fa-times-circle "></i>
					  Code fail
				  </div>
			  </div>
			  <div class="check-line">
				  <div class="check-inline efficiency success">
					  <i aria-hidden="true" class="fa fa-check-circle "></i>
					  Efficiency success
				  </div>
				  <div class="check-inline efficiency fail">
					  <i aria-hidden="true" class="fa fa-times-circle "></i>
					  Efficiency fail
				  </div>
			  </div>
			  <div class="check-line">
				  <div class="check-inline answer success">
					  <i aria-hidden="true" class="fa fa-check-circle "></i>
					  Text answer success
				  </div>
				  <div class="check-inline answer fail">
					  <i aria-hidden="true" class="fa fa-times-circle "></i>
					  Text answer fail
				  </div>
			  </div>
			  <div class="check-line">
				  <div class="check-inline requirement fail offline">
					  <i aria-hidden="true" class="fa fa-times-circle "></i>
					  Skipped - Previous check failed
				  </div>
			  </div>
		  </div>
	  </div>
				  </div>
			  </div>
		  </div>
	  </div>
	  </div>
			  <div class="fs-4">
			  </div>
			</div>
		</div>
	  </div>
		  </div>
		  <div data-role="task1017" data-position="5" id="task-num-4">
			<div class="panel panel-default task-card " id="task-1017">
		<span id="user_id" data-id="488834"></span>
		<div class="panel-heading panel-heading-actions">
		  <h3 class="panel-title">
			4. 100
		  </h3>
		  <div>
			  <span class="label label-info">
				mandatory
			  </span>
		  </div>
		</div>
		<div class="panel-body">
		  <span id="user_id" data-id="488834"></span>
		  <!-- Progress vs Score -->
		  <!-- Task Body -->
		  <p>Write a function that sets the value of a bit to <code>0</code> at a given index.</p>
	  <ul>
	  <li>Prototype: <code>int clear_bit(unsigned long int *n, unsigned int index);</code></li>
	  <li>where <code>index</code> is the index, starting from <code>0</code> of the bit you want to set</li>
	  <li>Returns: <code>1</code> if it worked, or <code>-1</code> if an error occurred</li>
	  </ul>
	  <pre><code>julien@ubuntu:~/0x14. Binary$ cat 4-main.c
	  #include &lt;stdio.h&gt;
	  #include "main.h"
	  
	  /**
	   * main - check the code
	   *
	   * Return: Always 0.
	   */
	  int main(void)
	  {
		  unsigned long int n;
	  
		  n = 1024;
		  clear_bit(&amp;n, 10);
		  printf("%lu\n", n);
		  n = 0;
		  clear_bit(&amp;n, 10);
		  printf("%lu\n", n);
		  n = 98;
		  clear_bit(&amp;n, 1);
		  printf("%lu\n", n);
		  return (0);
	  }
	  julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-clear_bit.c -o e
	  julien@ubuntu:~/0x14. Binary$ ./e
	  0
	  0
	  96
	  julien@ubuntu:~/0x14. Binary$ 
	  </code></pre>
		</div>
		<div class="list-group">
		  <!-- Task URLs -->
		  <!-- Github information -->
			<div class="list-group-item">
			  <p><strong>Repo:</strong></p>
			  <ul>
				<li>GitHub repository: <code>alx-low_level_programming</code></li>
				  <li>Directory: <code>0x14-bit_manipulation</code></li>
				  <li>File: <code>4-clear_bit.c</code></li>
			  </ul>
			</div>
		  <!-- Self-paced manual review -->
		</div>
		<!-- Panel footer - Controls -->
		<div class="panel-footer">
			<div class="align-items-center d-flex justify-content-between">
	  <div>
		  <button class="student_task_done btn btn-default btn-sm no" data-task-id="1017">
			<span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
			<span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
			<span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
			Done<span class="no pending">?</span><span class="yes">!</span>
		  </button>
		<button class="student-task-done-by btn btn-default btn-sm" data-task-id="1017" data-batch-id="99" data-toggle="modal" data-target="#task-1017-users-done-modal">
		  Help
		</button>
		<div class="modal fade users-done-modal" id="task-1017-users-done-modal" data-task-id="1017" data-batch-id="99">
		  <div class="modal-dialog">
			  <div class="modal-content">
			  <div class="modal-header">
				  <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
				  <h4 class="modal-title">Learners who are done with "4. 100"</h4>
			  </div>
			  <div class="modal-body">
				  <div class="list-group">
				  </div>
				  <div class="spinner">
					  <div class="bounce1"></div>
					  <div class="bounce2"></div>
					  <div class="bounce3"></div>
				  </div>
				  <div class="error"></div>
			  </div>
			  </div>
		  </div>
	  </div>
			<button class="btn btn-default btn-sm check-your-task-1017-modal-button" data-task-id="1017" data-toggle="modal" data-target="#task-test-correction-1017-correction-modal" id="task-num-4-check-code-btn" data-gtm-custom-event-name="task_checker_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:1017}">
				Check your code
			</button>
			<div class="modal fade task_correction_modal student_modal" id="task-test-correction-1017-correction-modal">
		  <div class="modal-dialog">
			  <div class="modal-content">
				  <div class="modal-header">
					  <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
					  <h4 class="modal-title">Correction of "4. 100"</h4>
				  </div>
				  <div class="modal-body">
					  <div class="actions">
						  <center>
							  <div class="alert alert-info hidden"></div>
	  
							  <button name="button" type="submit" class="btn btn-primary correction_request_test_send" data-task-id="1017">Start a new test</button>
							  <button class="btn btn-default close-modal hidden" data-dismiss="modal" type="button">Close</button>
	  
							  <div class="spinner" style="display: none;">
								  <div class="bounce1"></div>
								  <div class="bounce2"></div>
								  <div class="bounce3"></div>
							  </div>
							  <div class="error"></div>
							  <div class="info"></div>
						  </center>
					  </div>
					  <div class="result"></div>
	  
					  <div class="help">
		  <button data-task-id="1017">
			  <i aria-hidden="true" class="fa fa-info-circle "></i>
		  </button>
		  <div class="help-container" data-task-id="1017">
			  <div class="check-line">
				  <div class="check-inline requirement success">
					  <i aria-hidden="true" class="fa fa-check-circle "></i>
					  Requirement success
				  </div>
				  <div class="check-inline requirement fail">
					  <i aria-hidden="true" class="fa fa-times-circle "></i>
					  Requirement fail
				  </div>
			  </div>
			  <div class="check-line">
				  <div class="check-inline code success">
					  <i aria-hidden="true" class="fa fa-check-circle "></i>
					  Code success
				  </div>
				  <div class="check-inline code fail">
					  <i aria-hidden="true" class="fa fa-times-circle "></i>
					  Code fail
				  </div>
			  </div>
			  <div class="check-line">
				  <div class="check-inline efficiency success">
					  <i aria-hidden="true" class="fa fa-check-circle "></i>
					  Efficiency success
				  </div>
				  <div class="check-inline efficiency fail">
					  <i aria-hidden="true" class="fa fa-times-circle "></i>
					  Efficiency fail
				  </div>
			  </div>
			  <div class="check-line">
				  <div class="check-inline answer success">
					  <i aria-hidden="true" class="fa fa-check-circle "></i>
					  Text answer success
				  </div>
				  <div class="check-inline answer fail">
					  <i aria-hidden="true" class="fa fa-times-circle "></i>
					  Text answer fail
				  </div>
			  </div>
			  <div class="check-line">
				  <div class="check-inline requirement fail offline">
					  <i aria-hidden="true" class="fa fa-times-circle "></i>
					  Skipped - Previous check failed
				  </div>
			  </div>
		  </div>
	  </div>
				  </div>
			  </div>
		  </div>
	  </div>
	  </div>
			  <div class="fs-4">
			  </div>
			</div>
		</div>
	  </div>
	  
		  </div>
		  <div data-role="task1018" data-position="6" id="task-num-5">
			<div class="panel panel-default task-card " id="task-1018">
		<span id="user_id" data-id="488834"></span>
	  
		<div class="panel-heading panel-heading-actions">
		  <h3 class="panel-title">
			5. 101
		  </h3>
	  
		  <div>
			  <span class="label label-info">
				mandatory
			  </span>
		  </div>
		</div>
		<div class="panel-body">
		  <span id="user_id" data-id="488834"></span>
		  <!-- Progress vs Score -->
		  <!-- Task Body -->
		  <p>Write a function that returns the number of bits you would need to flip to get from one number to another.</p>
	  <ul>
	  <li>Prototype: <code>unsigned int flip_bits(unsigned long int n, unsigned long int m);</code></li>
	  <li>You are not allowed to use the <code>%</code> or <code>/</code> operators</li>
	  </ul>
	  <pre><code>julien@ubuntu:~/0x14. Binary$ cat 5-main.c
	  #include &lt;stdio.h&gt;
	  #include "main.h"
	  
	  /**
	   * main - check the code
	   *
	   * Return: Always 0.
	   */
	  int main(void)
	  {
		  unsigned int n;
	  
		  n = flip_bits(1024, 1);
		  printf("%u\n", n);
		  n = flip_bits(402, 98);
		  printf("%u\n", n);
		  n = flip_bits(1024, 3);
		  printf("%u\n", n);
		  n = flip_bits(1024, 1025);
		  printf("%u\n", n);
		  return (0);
	  }
	  julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-flip_bits.c -o f
	  julien@ubuntu:~/0x14. Binary$ ./f
	  2
	  5
	  3
	  1
	  julien@ubuntu:~/0x14. Binary$ 
	  </code></pre>
	  
		</div>
	  
		<div class="list-group">
		  <!-- Task URLs -->
		  <!-- Github information -->
			<div class="list-group-item">
			  <p><strong>Repo:</strong></p>
			  <ul>
				<li>GitHub repository: <code>alx-low_level_programming</code></li>
				  <li>Directory: <code>0x14-bit_manipulation</code></li>
				  <li>File: <code>5-flip_bits.c</code></li>
			  </ul>
			</div>
		  <!-- Self-paced manual review -->
		</div>
		<!-- Panel footer - Controls -->
		<div class="panel-footer">
			<div class="align-items-center d-flex justify-content-between">
	  <div>
		  <button class="student_task_done btn btn-default btn-sm no" data-task-id="1018">
			<span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
			<span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
			<span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
			Done<span class="no pending">?</span><span class="yes">!</span>
		  </button>
	  
		<button class="student-task-done-by btn btn-default btn-sm" data-task-id="1018" data-batch-id="99" data-toggle="modal" data-target="#task-1018-users-done-modal">
		  Help
		</button>
		<div class="modal fade users-done-modal" id="task-1018-users-done-modal" data-task-id="1018" data-batch-id="99">
		  <div class="modal-dialog">
			  <div class="modal-content">
			  <div class="modal-header">
				  <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
				  <h4 class="modal-title">Learners who are done with "5. 101"</h4>
			  </div>
			  <div class="modal-body">
				  <div class="list-group">
				  </div>
				  <div class="spinner">
					  <div class="bounce1"></div>
					  <div class="bounce2"></div>
					  <div class="bounce3"></div>
				  </div>
				  <div class="error"></div>
			  </div>
			  </div>
		  </div>
	  </div>
			<button class="btn btn-default btn-sm check-your-task-1018-modal-button" data-task-id="1018" data-toggle="modal" data-target="#task-test-correction-1018-correction-modal" id="task-num-5-check-code-btn" data-gtm-custom-event-name="task_checker_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:1018}">
				Check your code
			</button>
			<div class="modal fade task_correction_modal student_modal" id="task-test-correction-1018-correction-modal">
		  <div class="modal-dialog">
			  <div class="modal-content">
				  <div class="modal-header">
					  <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
					  <h4 class="modal-title">Correction of "5. 101"</h4>
				  </div>
				  <div class="modal-body">
					  <div class="actions">
						  <center>
							  <div class="alert alert-info hidden"></div>
							  <button name="button" type="submit" class="btn btn-primary correction_request_test_send" data-task-id="1018">Start a new test</button>
							  <button class="btn btn-default close-modal hidden" data-dismiss="modal" type="button">Close</button>
	  
							  <div class="spinner" style="display: none;">
								  <div class="bounce1"></div>
								  <div class="bounce2"></div>
								  <div class="bounce3"></div>
							  </div>
							  <div class="error"></div>
							  <div class="info"></div>
						  </center>
					  </div>
					  <div class="result"></div>
					  <div class="help">
		  <button data-task-id="1018">
			  <i aria-hidden="true" class="fa fa-info-circle "></i>
		  </button>
		  <div class="help-container" data-task-id="1018">
			  <div class="check-line">
				  <div class="check-inline requirement success">
					  <i aria-hidden="true" class="fa fa-check-circle "></i>
					  Requirement success
				  </div>
				  <div class="check-inline requirement fail">
					  <i aria-hidden="true" class="fa fa-times-circle "></i>
					  Requirement fail
				  </div>
			  </div>
			  <div class="check-line">
				  <div class="check-inline code success">
					  <i aria-hidden="true" class="fa fa-check-circle "></i>
					  Code success
				  </div>
				  <div class="check-inline code fail">
					  <i aria-hidden="true" class="fa fa-times-circle "></i>
					  Code fail
				  </div>
			  </div>
			  <div class="check-line">
				  <div class="check-inline efficiency success">
					  <i aria-hidden="true" class="fa fa-check-circle "></i>
					  Efficiency success
				  </div>
				  <div class="check-inline efficiency fail">
					  <i aria-hidden="true" class="fa fa-times-circle "></i>
					  Efficiency fail
				  </div>
			  </div>
			  <div class="check-line">
				  <div class="check-inline answer success">
					  <i aria-hidden="true" class="fa fa-check-circle "></i>
					  Text answer success
				  </div>
				  <div class="check-inline answer fail">
					  <i aria-hidden="true" class="fa fa-times-circle "></i>
					  Text answer fail
				  </div>
			  </div>
			  <div class="check-line">
				  <div class="check-inline requirement fail offline">
					  <i aria-hidden="true" class="fa fa-times-circle "></i>
					  Skipped - Previous check failed
				  </div>
			  </div>
		  </div>
	  </div>
				  </div>
			  </div>
		  </div>
	  </div>
	  </div>
			  <div class="fs-4">
			  </div>
			</div>
		</div>
	  </div>
		  </div>
	  
		  <p class="lg-gap">
			</p><form class="button_to" method="post" action="/projects/232/unlock_optionals"><input id="unlock_optional_btn" class="btn btn-primary btn-block" data-confirm="Are you sure? Make sure you focused on the mandatory tasks first" data-disable-with="Unlocking 2 advanced tasks..." data-gtm-custom-event-name="project_unlock_advanced_tasks" type="submit" value="Done with the mandatory tasks? Unlock 2 advanced tasks now!"><input type="hidden" name="authenticity_token" value="ujA4tRaRXbQ3JBezXUbvQBRWm__309St_LNzWISORq6RcxF9IBTIZK5VIyDX8VLEFonAo3LZ1my7efec2y6CXA" autocomplete="off"></form>
		  <p></p>
	  
		</div>
	  </div>
</body>
</html>
