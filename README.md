<!-- PROFILE README for GitHub -->
<!-- Paste this into: github.com/chougulesumeru/chougulesumeru/README.md -->

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Sumeru Chougule - Profile</title>
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.0/css/all.min.css">
    <style>
        * {
            margin: 0;
            padding: 0;
            box-sizing: border-box;
            font-family: 'Segoe UI', system-ui, -apple-system, sans-serif;
        }
        
        body {
            background: linear-gradient(135deg, #0f172a 0%, #1e293b 50%, #0f172a 100%);
            color: #e2e8f0;
            min-height: 100vh;
            padding: 20px;
            display: flex;
            justify-content: center;
            align-items: center;
        }
        
        .profile-card {
            width: 100%;
            max-width: 900px;
            background: rgba(30, 41, 59, 0.85);
            backdrop-filter: blur(10px);
            border-radius: 24px;
            overflow: hidden;
            box-shadow: 0 20px 60px rgba(0, 0, 0, 0.5);
            border: 1px solid rgba(100, 116, 139, 0.2);
            animation: fadeIn 0.8s ease-out;
        }
        
        .header {
            background: linear-gradient(90deg, #0ea5e9 0%, #3b82f6 100%);
            padding: 40px 40px 30px;
            text-align: center;
            position: relative;
        }
        
        .header::after {
            content: '';
            position: absolute;
            bottom: 0;
            left: 0;
            width: 100%;
            height: 4px;
            background: linear-gradient(90deg, #f59e0b, #ef4444, #8b5cf6);
        }
        
        .avatar {
            width: 140px;
            height: 140px;
            border-radius: 50%;
            border: 5px solid rgba(255, 255, 255, 0.2);
            margin: 0 auto 20px;
            background: linear-gradient(135deg, #1e293b, #0f172a);
            display: flex;
            align-items: center;
            justify-content: center;
            font-size: 60px;
            color: #0ea5e9;
            box-shadow: 0 10px 30px rgba(0, 0, 0, 0.3);
        }
        
        h1 {
            font-size: 2.8rem;
            font-weight: 800;
            margin-bottom: 8px;
            background: linear-gradient(to right, #ffffff, #cbd5e1);
            -webkit-background-clip: text;
            background-clip: text;
            color: transparent;
            letter-spacing: -0.5px;
        }
        
        h2 {
            font-size: 1.5rem;
            font-weight: 500;
            color: #cbd5e1;
            margin-bottom: 25px;
        }
        
        .tagline {
            display: inline-block;
            padding: 8px 20px;
            background: rgba(255, 255, 255, 0.1);
            border-radius: 50px;
            font-weight: 500;
            font-size: 1.1rem;
            margin-bottom: 10px;
            border: 1px solid rgba(255, 255, 255, 0.1);
        }
        
        .content {
            padding: 40px;
            display: grid;
            grid-template-columns: 1fr 1fr;
            gap: 40px;
        }
        
        .about-section {
            grid-column: 1 / -1;
            text-align: center;
            margin-bottom: 20px;
        }
        
        .about-section p {
            font-size: 1.2rem;
            line-height: 1.6;
            color: #94a3b8;
            max-width: 800px;
            margin: 0 auto;
        }
        
        .info-section h3, .skills-section h3 {
            font-size: 1.5rem;
            margin-bottom: 20px;
            color: #0ea5e9;
            display: flex;
            align-items: center;
            gap: 10px;
        }
        
        .info-section h3 i, .skills-section h3 i {
            font-size: 1.3rem;
        }
        
        .info-list {
            list-style: none;
        }
        
        .info-list li {
            margin-bottom: 15px;
            display: flex;
            align-items: center;
            gap: 12px;
            font-size: 1.1rem;
        }
        
        .info-list i {
            width: 20px;
            color: #3b82f6;
        }
        
        .skills-container {
            display: flex;
            flex-wrap: wrap;
            gap: 12px;
        }
        
        .skill-tag {
            background: linear-gradient(135deg, rgba(14, 165, 233, 0.15), rgba(59, 130, 246, 0.1));
            padding: 10px 20px;
            border-radius: 50px;
            font-weight: 500;
            font-size: 1rem;
            border: 1px solid rgba(14, 165, 233, 0.3);
            transition: all 0.3s ease;
        }
        
        .skill-tag:hover {
            transform: translateY(-3px);
            background: linear-gradient(135deg, rgba(14, 165, 233, 0.25), rgba(59, 130, 246, 0.2));
            box-shadow: 0 5px 15px rgba(14, 165, 233, 0.2);
        }
        
        .footer {
            background: rgba(15, 23, 42, 0.7);
            padding: 30px 40px;
            display: flex;
            justify-content: center;
            flex-wrap: wrap;
            gap: 20px;
        }
        
        .contact-btn {
            display: inline-flex;
            align-items: center;
            gap: 10px;
            padding: 14px 28px;
            border-radius: 50px;
            text-decoration: none;
            font-weight: 600;
            font-size: 1.1rem;
            transition: all 0.3s ease;
            min-width: 180px;
            justify-content: center;
        }
        
        .btn-email {
            background: linear-gradient(135deg, #ef4444, #dc2626);
            color: white;
        }
        
        .btn-linkedin {
            background: linear-gradient(135deg, #0A66C2, #004182);
            color: white;
        }
        
        .btn-github {
            background: linear-gradient(135deg, #333333, #181717);
            color: white;
        }
        
        .btn-resume {
            background: linear-gradient(135deg, #8b5cf6, #7c3aed);
            color: white;
        }
        
        .contact-btn:hover {
            transform: translateY(-5px);
            box-shadow: 0 10px 20px rgba(0, 0, 0, 0.3);
        }
        
        .location {
            display: flex;
            align-items: center;
            justify-content: center;
            gap: 10px;
            margin-top: 30px;
            color: #94a3b8;
            font-size: 1.1rem;
        }
        
        @keyframes fadeIn {
            from { opacity: 0; transform: translateY(20px); }
            to { opacity: 1; transform: translateY(0); }
        }
        
        @media (max-width: 768px) {
            .content {
                grid-template-columns: 1fr;
                padding: 30px;
                gap: 30px;
            }
            
            h1 {
                font-size: 2.2rem;
            }
            
            .header {
                padding: 30px 20px;
            }
            
            .footer {
                flex-direction: column;
                align-items: center;
                padding: 20px;
            }
            
            .contact-btn {
                width: 100%;
                max-width: 300px;
            }
        }
        
        @media (max-width: 480px) {
            .profile-card {
                border-radius: 16px;
            }
            
            .avatar {
                width: 120px;
                height: 120px;
                font-size: 50px;
            }
            
            h1 {
                font-size: 1.8rem;
            }
            
            .content {
                padding: 20px;
            }
        }
    </style>
</head>
<body>
    <div class="profile-card">
        <div class="header">
            <div class="avatar">
                <i class="fas fa-user"></i>
            </div>
            <h1>Sumeru Chougule</h1>
            <div class="tagline">C++ • Cloud • DevOps Engineer</div>
            <h2>Pune, India</h2>
        </div>
        
        <div class="content">
            <div class="about-section">
                <p>Passionate software engineer specializing in C++, cloud technologies, and DevOps practices. Experienced in building scalable systems and implementing CI/CD pipelines for efficient software delivery.</p>
            </div>
            
            <div class="info-section">
                <h3><i class="fas fa-info-circle"></i> Professional Info</h3>
                <ul class="info-list">
                    <li><i class="fas fa-code"></i> <strong>Specialization:</strong> C++, Cloud, DevOps</li>
                    <li><i class="fas fa-map-marker-alt"></i> <strong>Location:</strong> Pune, India</li>
                    <li><i class="fas fa-briefcase"></i> <strong>Role:</strong> Software Engineer</li>
                    <li><i class="fas fa-graduation-cap"></i> <strong>Focus:</strong> Scalable Systems & CI/CD</li>
                </ul>
            </div>
            
            <div class="skills-section">
                <h3><i class="fas fa-cogs"></i> Technical Skills</h3>
                <div class="skills-container">
                    <div class="skill-tag">C++</div>
                    <div class="skill-tag">Cloud Computing</div>
                    <div class="skill-tag">DevOps</div>
                    <div class="skill-tag">AWS/Azure</div>
                    <div class="skill-tag">Docker</div>
                    <div class="skill-tag">Kubernetes</div>
                    <div class="skill-tag">CI/CD</div>
                    <div class="skill-tag">Linux</div>
                    <div class="skill-tag">Python</div>
                    <div class="skill-tag">System Design</div>
                </div>
            </div>
        </div>
        
        <div class="footer">
            <a href="mailto:chougulesumeru19@gmail.com" class="contact-btn btn-email">
                <i class="fas fa-envelope"></i> Email
            </a>
            <a href="https://www.linkedin.com/in/sumeru-chougule-414345206/" target="_blank" class="contact-btn btn-linkedin">
                <i class="fab fa-linkedin"></i> LinkedIn
            </a>
            <a href="https://github.com/chougulesumeru" target="_blank" class="contact-btn btn-github">
                <i class="fab fa-github"></i> GitHub
            </a>
            <a href="https://github.com/chougulesumeru/chougulesumeru/blob/main/%20Sumerc_Resume.pdf" download class="contact-btn btn-resume">
                <i class="fas fa-download"></i> Resume
            </a>
        </div>
        
        <div class="location">
            <i class="fas fa-map-pin"></i>
            <span>Pune, Maharashtra, India</span>
        </div>
    </div>
    
    <script>
        // Add subtle animation to skill tags on hover
        document.querySelectorAll('.skill-tag').forEach(tag => {
            tag.addEventListener('mouseenter', function() {
                this.style.transform = 'translateY(-3px)';
            });
            
            tag.addEventListener('mouseleave', function() {
                this.style.transform = 'translateY(0)';
            });
        });
        
        // Add click effect to buttons
        document.querySelectorAll('.contact-btn').forEach(button => {
            button.addEventListener('click', function() {
                this.style.transform = 'scale(0.95)';
                setTimeout(() => {
                    this.style.transform = '';
                }, 200);
            });
        });
    </script>
</body>
</html>
---

## 🔭 About Me
I am an **Electronics & Telecommunication** engineer turned **C++ & Cloud/DevOps** professional. I build high-performance C++ modules for ADAS and design secure, scalable cloud infrastructures on AWS. I enjoy solving low-level performance problems and building reliable deployment pipelines.

**Core strengths:** C++ (OOP), AWS (VPC/EC2/S3/IAM), Linux, CI/CD (Jenkins / GitHub Actions), Docker, MATLAB/Simulink (MBD), LiDAR perception.

---

## 🧰 Tech Stack

<p align="center">
  <img src="https://skillicons.dev/icons?i=cpp,aws,docker,jenkins,git,github,matlab,linux,terraform" alt="tech icons"/>
</p>

**Cloud & Infra:** AWS (VPC, EC2, S3, IAM, Aurora), VPC Flow Logs  
**Languages:** C++ (OOP), Bash  
**DevOps:** Docker, Jenkins, GitHub Actions, CI/CD  
**MBD / Tools:** MATLAB / Simulink, MIL / SIL  
**Other:** LiDAR processing, point-cloud pipelines, performance optimization

---

## 🔎 Experience (high level)

- **Fusion Softwares — Cloud & DevOps Intern** (Aug 2025 – Present)  
  - Built secure AWS environments, automated VPC traffic analysis, integrated Aurora for prototype apps.  
  - Automated routine system tasks using Linux and bash; improved deployment reliability.
  - Designed and deployed a full-stack application with secure database connectivity to AWS Aurora, configuring VPC and
security group rules for network isolation.

- **KPIT Technologies — Associate Engineer (C++ & MBD)** (Dec 2023 – Jun 2025)  
  - Contributed to ADAS projects: LiDAR simulation, object detection & collision prediction in C++.  
  - Used MATLAB/Simulink for model-based design and verification (MIL/SIL).
  - Developed a strong understanding of object-oriented programming concepts and Linux terminal commands.
  - Played a vital role as an automotive C++ software developer, especially in the ADAS domain, developing and improving
object-oriented software components (OOP) and implementing new features.


---

## 🔭 Featured Projects

| Project (Repo) | What it does | Quick links |
|---|---|---:|
| **LiDAR Perception** — `lidar-perception` | Real-time point-cloud processing and object detection for ADAS (C++). | 🔗 [Repo](https://github.com/chougulesumeru/lidar-perception) |
| **AWS VPC Deployment** — `vpc-deployment` | Infrastructure templates for VPC with public/private subnets and IGW. | 🔗 [Repo](https://github.com/chougulesumeru/vpc-deployment) |
| **Cruise Control (Sim)** — `cruise-control-sim` | MATLAB/Simulink model for vehicle cruise control (feedback control). | 🔗 [Repo](https://github.com/chougulesumeru/cruise-control-sim) |

---

## 📈 GitHub Stats & Trophies

## 📈 GitHub Statistics & Activity

<p align="center">
  <!-- Overall GitHub Stats -->
  <img width="49%" src="https://github-readme-stats.vercel.app/api?username=chougulesumeru&show_icons=true&include_all_commits=true&count_private=true&theme=tokyonight&hide_border=true" />
  
  <!-- GitHub Streak Stats -->
  <img width="49%" src="https://streak-stats.demolab.com/?user=chougulesumeru&theme=tokyonight&hide_border=true" />
</p>

<p align="center">
  <!-- Top Languages -->
  <img width="49%" src="https://github-readme-stats.vercel.app/api/top-langs/?username=chougulesumeru&layout=compact&langs_count=8&theme=tokyonight&hide_border=true"/>

  <!-- Activity Graph -->
  <img width="49%" src="https://github-readme-activity-graph.vercel.app/graph?username=chougulesumeru&bg_color=1a1b27&color=38bdae&line=70a5fd&point=bf91f3&area=true&hide_border=true"/>
</p>

<p align="center">
  <!-- 3D Contribution Chart -->
  <img src="https://github.com/chougulesumeru/chougulesumeru/blob/main/profile-3d-contrib/profile-night-green.svg" />
</p>

<p align="center">
  <!-- Trophies -->
  <img src="https://github-profile-trophy.vercel.app/?username=chougulesumeru&theme=tokyonight&no-frame=true&row=1&column=7"/>
</p>


---

## ✨ Highlights (quick bullets — great for recruiters)
- ✅ Experience building secure AWS VPCs with subnet segmentation and routing.  
- ✅ Developed LiDAR-based perception modules in C++ for ADAS systems.  
- ✅ Familiar with CI/CD pipeline creation and automation using Jenkins & GitHub Actions.  
- ✅ Comfortable in Linux-based production environments and performance debugging.

---

## 📫 Contact & Availability
- **Email:** chougulesumeru19@gmail.com  
- **LinkedIn:** https://www.linkedin.com/in/sumeru-chougule-414345206/  
- Open to **contract or full-time** roles in Software, Cloud, DevOps, and ADAS.

---

## 👇 Quick links
- 🔗 Portfolio (GitHub Pages): `https://chougulesumeru.github.io
- 📄 Resume: "https://github.com/chougulesumeru/chougulesumeru/blob/main/%20Sumerc_Resume.pdf
"



