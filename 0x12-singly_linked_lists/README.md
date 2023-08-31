<html lang="en">
<head>
	<meta charset="utf-8">
	<meta http-equiv="X-UA-Compatible" content="IE=edge">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<!-- The above 3 meta tags *must* come first in the head; any other head content must come *after* these tags -->
	<meta name="description" content="">
	<meta name="google" content="notranslate">
	<script async="" src="https://www.googletagmanager.com/gtm.js?id=GTM-N4C8MF2"></script>
	<script>
		window.dataLayer = window.dataLayer || [];
		dataLayer.push({ "userId": 488834, "visitorType": "student", "batch": { "id": 99, "fullNameWithC": "AFR-0623 (C#17)", "schoolLocation": { "id": 1, "name": "ALX Africa" } }, "curriculum": { "id": 1, "name": "SE Foundations" } });
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
	<script>(function (w, d, s, l, i) {
				w[l] = w[l] || []; w[l].push({
					'gtm.start':
						new Date().getTime(), event: 'gtm.js'
				}); var f = d.getElementsByTagName(s)[0],
					j = d.createElement(s), dl = l != 'dataLayer' ? '&l=' + l : ''; j.async = true; j.src =
						'https://www.googletagmanager.com/gtm.js?id=' + i + dl; f.parentNode.insertBefore(j, f);
			})(window, document, 'script', 'dataLayer', 'GTM-N4C8MF2');</script>
	<!-- End Google Tag Manager -->
	<title>Project: 0x12. C - Singly linked lists | ALX Africa Intranet</title>
	<link rel="stylesheet" href="https://use.typekit.net/xgz4ilr.css">
	<link rel="stylesheet" media="all"
		href="/assets/application_alx-e1aa485258dfce25ad8fa691368792000eb8217d3990ef9e64e9b1a8a1ef761b.css">
	<script src="https://www.gstatic.com/charts/loader.js"></script>
	<script src="/assets/application-54114f22a70e5f69761998e8ac495fbe3bc128fecc9e13aa1cea5d1b8aa37b6d.js"></script>
	<link rel="shortcut icon" type="image/x-icon" href="/favicon_alx.ico">
	<meta name="csrf-param" content="authenticity_token">
	<meta name="csrf-token"
		content="pO654fo2i4ODiI0BiOFLufksY6iYUpejuur1-XZfuyJLz3RWSjClLVXOEzmGKIDlfgx6pao5YYv2WDJbjaMo2w">
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
	<script src="/packs/js/application-65fbaa64604540bfd91e.js"></script>
	<link rel="stylesheet" media="screen" href="/packs/css/application-87456da7.css">
</head>
<body class="signed_in env_production notranslate" translate="no" data-theme-suffix="_alx">
	<main>
		<article class="">
			<div class="project row">
				<div class="col-xs-12 col-md-10 col-lg-8 contains-images">
					<h1 class="gap">0x12. C - Singly linked lists</h1>
					<div data-react-class="tags/Tags"
						data-react-props="{&quot;tags&quot;:[{&quot;id&quot;:7,&quot;value&quot;:&quot;C&quot;,&quot;author_id&quot;:null,&quot;created_at&quot;:&quot;2022-06-16T01:59:38.000Z&quot;,&quot;updated_at&quot;:&quot;2022-06-16T01:59:38.000Z&quot;},{&quot;id&quot;:17,&quot;value&quot;:&quot;Algorithm&quot;,&quot;author_id&quot;:null,&quot;created_at&quot;:&quot;2022-06-16T01:59:38.000Z&quot;,&quot;updated_at&quot;:&quot;2022-06-16T01:59:38.000Z&quot;},{&quot;id&quot;:18,&quot;value&quot;:&quot;Data structure&quot;,&quot;author_id&quot;:null,&quot;created_at&quot;:&quot;2022-06-16T01:59:38.000Z&quot;,&quot;updated_at&quot;:&quot;2022-06-16T01:59:38.000Z&quot;}]}"
						data-react-cache-id="tags/Tags-0"></div>
					<div data-react-class="projects/ProjectMetadata"
						data-react-props="{&quot;metadata&quot;:{&quot;author&quot;:&quot;Julien Barbier&quot;,&quot;weight&quot;:1,&quot;correction&quot;:{&quot;released&quot;:true,&quot;auto_correction_available_at&quot;:&quot;2023-08-24T12:00:00.000+03:00&quot;,&quot;requires_auto_correction&quot;:true,&quot;requires_manual_correction&quot;:false},&quot;bpi&quot;:{&quot;current&quot;:true,&quot;started&quot;:false,&quot;in_second_deadline&quot;:false,&quot;starts_at&quot;:&quot;2023-08-24T06:00:00.000+03:00&quot;,&quot;ends_at&quot;:&quot;2023-08-25T06:00:00.000+03:00&quot;,&quot;second_deadline_at&quot;:&quot;2023-08-26T06:00:00.000+03:00&quot;}}}"
						data-react-cache-id="projects/ProjectMetadata-0"></div>
					<div id="project_id" style="display: none" data-project-id="229"></div>
					<div class="panel panel-default">
						<div class="panel-heading">
							<h3 class="panel-title">Concepts</h3>
						</div>
						<div class="panel-body">
							<p>
								<em>For this project, we expect you to look at this concept:</em>
							</p>
							<ul>
								<li>
									<a href="/concepts/120">Data Structures</a>
								</li>
							</ul>
						</div>
					</div>
					<div class="panel panel-default" id="project-description">
						<div class="panel-body">
							<p><img src="https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/229/giphy-3.gif"
									alt="" loading="lazy" style=""></p>
							<h2>Resources</h2>
							<p><strong>Read or watch</strong>:</p>
							<ul>
								<li><a href="/rltoken/joxg32-tt4lUh8Afgst8tA" title="Linked Lists"
										target="_blank">Linked Lists</a> </li>
								<li><a href="/rltoken/USaZbNdfcuIFII-K2YPsKQ" title="Google" target="_blank">Google</a>
								</li>
								<li><a href="/rltoken/epKUCIcoA6XaN1T3Vtr_9w" title="Youtube"
										target="_blank">Youtube</a> </li>
							</ul>
							<h2>Learning Objectives</h2>
							<p>At the end of this project, you are expected to be able to <a
									href="/rltoken/xtUoOGrH_fQu_r19q1Tivw" title="explain to anyone"
									target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:
							</p>
							<h3>General</h3>
							<ul>
								<li>When and why using linked lists vs arrays</li>
								<li>How to build and use linked lists</li>
							</ul>
							<h3>Copyright - Plagiarism</h3>
							<ul>
								<li>You are tasked to come up with solutions for the tasks below yourself to meet with
									the above learning objectives.</li>
								<li>You will not be able to meet the objectives of this or any following project by
									copying and pasting someone else’s work. </li>
								<li>You are not allowed to publish any content of this project.</li>
								<li>Any form of plagiarism is strictly forbidden and will result in removal from the
									program.</li>
							</ul>
							<h2>Requirements</h2>
							<h3>General</h3>
							<ul>
								<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
								<li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using
									the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
								<li>All your files should end with a new line</li>
								<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory
								</li>
								<li>Your code should use the <code>Betty</code> style. It will be checked using <a
										href="https://github.com/alx-tools/Betty/blob/master/betty-style.pl"
										title="betty-style.pl" target="_blank">betty-style.pl</a> and <a
										href="https://github.com/alx-tools/Betty/blob/master/betty-doc.pl"
										title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
								<li>You are not allowed to use global variables</li>
								<li>No more than 5 functions per file</li>
								<li>The only C standard library functions allowed are <code>malloc</code>,
									<code>free</code> and <code>exit</code>. Any use of functions like
									<code>printf</code>, <code>puts</code>, <code>calloc</code>, <code>realloc</code>
									etc… is forbidden
								</li>
								<li>You are allowed to use <a
										href="https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c"
										title="_putchar" target="_blank">_putchar</a></li>
								<li>You don’t have to push <code>_putchar.c</code>, we will use our file. If you do it
									won’t be taken into account</li>
								<li>In the following examples, the <code>main.c</code> files are shown as examples. You
									can use them to test your functions, but you don’t have to push them to your repo
									(if you do we won’t take them into account). We will use our own <code>main.c</code>
									files at compilation. Our <code>main.c</code> files might be different from the one
									shown in the examples</li>
								<li>The prototypes of all your functions and the prototype of the function
									<code>_putchar</code> should be included in your header file called
									<code>lists.h</code>
								</li>
								<li>Don’t forget to push your header file</li>
								<li>All your header files should be include guarded</li>
							</ul>
							<h2>More Info</h2>
							<p>Please use this data structure for this project:</p>
							<pre><code>/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
</code></pre>
						</div>
					</div>
				</div>
			</div>
		</article>
	</main>
</body>
</html>
