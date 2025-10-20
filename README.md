<!doctype html>

<html lang="en">
<head>
  <meta charset="utf-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1" />
  <title>Learning C++ — README</title>
  <style>
    :root{
      --bg:#0f1724; --card:#0b1220; --muted:#9aa4b2; --accent:#60a5fa; --glass: rgba(255,255,255,0.03);
      --mono: 'SFMono-Regular', Consolas, 'Liberation Mono', Menlo, monospace;
    }
    html,body{height:100%;margin:0;font-family:Inter, ui-sans-serif, system-ui, -apple-system, 'Segoe UI', Roboto, 'Helvetica Neue', Arial; background: linear-gradient(180deg,#071126 0%, #071936 100%); color:#e6eef6}
    .container{max-width:960px;margin:40px auto;padding:28px;background:linear-gradient(180deg, rgba(255,255,255,0.02), rgba(255,255,255,0.01));border-radius:12px;box-shadow:0 8px 30px rgba(2,6,23,0.6)}
    header{display:flex;align-items:center;justify-content:space-between;gap:18px}
    h1{margin:0;font-size:28px;letter-spacing:-0.5px}
    p.lead{margin:6px 0 0;color:var(--muted)}
    .meta{display:flex;gap:10px;align-items:center}
    .badge{background:var(--glass);padding:6px 10px;border-radius:999px;font-size:13px;color:var(--muted)}
    section{margin-top:22px}
    h2{font-size:18px;margin:0 0 10px}
    pre{background:#071426;padding:14px;border-radius:8px;overflow:auto;font-family:var(--mono);font-size:13px;color:#cfe8ff}
    code.inline{background:rgba(255,255,255,0.03);padding:2px 6px;border-radius:6px;font-family:var(--mono)}
    .grid{display:grid;grid-template-columns:1fr 320px;gap:20px}
    .card{background:linear-gradient(180deg, rgba(255,255,255,0.01), rgba(255,255,255,0.00));padding:14px;border-radius:10px;border:1px solid rgba(255,255,255,0.03)}
    ul{margin:8px 0 0;padding-left:18px}
    .actions{display:flex;gap:10px;margin-top:10px}
    button{background:transparent;border:1px solid rgba(255,255,255,0.06);color:var(--accent);padding:8px 10px;border-radius:8px;cursor:pointer}
    button.secondary{color:var(--muted)}
    footer{margin-top:28px;color:var(--muted);font-size:13px}
    @media (max-width:820px){.grid{grid-template-columns:1fr;}}
  </style>
</head>
<body>
  <div class="container">
    <header>
      <div>
        <h1>🚀 Learning C++</h1>
        <p class="lead">Repository of practice code, notes, and mini-projects while learning C++.</p>
      </div>
      <div class="meta">
        <span class="badge">Mahadeb Ghosh</span>
        <span class="badge">Final Year ECE</span>
      </div>
    </header><div class="grid">
  <main>
    <section class="card">
      <h2>📘 About</h2>
      <p>This repository includes basic to intermediate C++ programs, Object-Oriented Programming examples, mini-projects, and helpful resources for learning.</p>

      <h2>🧩 Topics Covered</h2>
      <ul>
        <li>Input / Output, Data Types, Operators</li>
        <li>Control Flow: conditionals & loops</li>
        <li>Functions, Recursion</li>
        <li>Arrays, Strings, Vectors</li>
        <li>Pointers & References</li>
        <li>Classes & Objects, Inheritance, Polymorphism</li>
        <li>File I/O, Exception Handling</li>
        <li>STL: vector, map, set, algorithms</li>
      </ul>

      <h2>⚙ How to Run</h2>
      <pre><code>// Compile and run a program

$ g++ filename.cpp -o output $ ./output

// On Windows $ g++ filename.cpp -o output.exe $ output.exe </code></pre>

<h2>🧭 Goals</h2>
      <ul>
        <li>Build a strong foundation in C++</li>
        <li>Master OOP concepts</li>
        <li>Prepare for competitive programming & projects</li>
        <li>Practice for software and VLSI-related applications</li>
      </ul>

      <h2>📚 Resources</h2>
      <ul>
        <li><a href="https://www.w3schools.com/cpp/" target="_blank">C++ Tutorial - W3Schools</a></li>
        <li><a href="https://www.geeksforgeeks.org/c-plus-plus/" target="_blank">GeeksforGeeks C++</a></li>
        <li><a href="https://cplusplus.com/doc/tutorial/" target="_blank">cplusplus.com</a></li>
        <li>Books: <em>Programming in C++</em> (Balagurusamy), <em>C++ Primer</em> (Lippman)</li>
      </ul>
    </section>

    <section class="card" style="margin-top:14px">
      <h2>🗂 Suggested Folder Structure</h2>
      <pre><code>learning-cpp/

├─ basics/ │  ├─ hello_world.cpp │  ├─ variables.cpp │  ├─ loops.cpp │  └─ conditions.cpp ├─ intermediate/ │  ├─ arrays.cpp │  ├─ functions.cpp │  ├─ pointers.cpp │  └─ strings.cpp ├─ oop/ │  ├─ classes_objects.cpp │  ├─ inheritance.cpp │  ├─ polymorphism.cpp │  └─ encapsulation.cpp ├─ projects/ │  ├─ calculator.cpp │  ├─ student_management.cpp │  └─ mini_game.cpp └─ README.md </code></pre> </section> </main>

<aside>
    <div class="card">
      <h2>Quick Actions</h2>
      <p>Copy the README content or download it as an HTML file for your repo root.</p>
      <div class="actions">
        <button id="copyBtn">Copy HTML</button>
        <button id="downloadBtn" class="secondary">Download .html</button>
      </div>
      <p style="margin-top:10px;color:var(--muted);font-size:13px">Edit the file and add your GitHub or email in the Author section before publishing.</p>
    </div>

    <div class="card" style="margin-top:14px">
      <h2>Author</h2>
      <p><strong>Mahadeb Ghosh</strong><br>Final Year ECE Student | Aspiring VLSI Engineer</p>
      <p style="color:var(--muted);font-size:13px">Replace with your GitHub profile or email.</p>
    </div>
  </aside>
</div>

<footer>
  Tip: For a minimal README.md version, convert headings to markdown and remove the CSS / JS.
</footer>

  </div>  <script>
    const html = document.documentElement.outerHTML;
    document.getElementById('copyBtn').addEventListener('click', async () => {
      try{
        await navigator.clipboard.writeText(html);
        alert('HTML copied to clipboard!');
      }catch(e){
        alert('Copy failed — select and copy manually.');
      }
    });

    document.getElementById('downloadBtn').addEventListener('click', () => {
      const blob = new Blob([html], {type: 'text/html'});
      const url = URL.createObjectURL(blob);
      const a = document.createElement('a');
      a.href = url; a.download = 'README.html'; document.body.appendChild(a); a.click(); a.remove();
      URL.revokeObjectURL(url);
    });
  </script></body>
</html>
