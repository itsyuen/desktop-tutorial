# ssh_key setup

## Run:

ssh-keygen -t ed25519 -C "itsyuen@standalone-ubuntu-ssd"

Press Enter for all prompts.

Then:

ls -la ~/.ssh

You should now see:

id_ed25519
id_ed25519.pub

Show/copy the public key:

cat ~/.ssh/id_ed25519.pub

Add that full line to GitHub:

GitHub → Settings → SSH and GPG keys → New SSH key

Title:

Standalone Ubuntu SSD Hitachi320

Then test:

ssh -T git@github.com

## actaul bash results

peter@peter-Hitachi320:~/GitHub$ ssh-keygen -t ed25519 -C "itsyuen@standalone-ubuntu-ssd"
Generating public/private ed25519 key pair.
Enter file in which to save the key (/home/peter/.ssh/id_ed25519): 
Enter passphrase (empty for no passphrase): 
Enter same passphrase again: 
Your identification has been saved in /home/peter/.ssh/id_ed25519
Your public key has been saved in /home/peter/.ssh/id_ed25519.pub
The key fingerprint is:
SHA256:nswoo5/eWYuVhR6s4/c4n1CmHiYYRAh2iGjzOau90P0 itsyuen@standalone-ubuntu-ssd
The key's randomart image is:
+--[ED25519 256]--+
|+o.o.            |
|++o.             |
|. o o            |
|   =   . .       |
|    +   S +      |
|  ...o B O       |
| .o.+.= #        |
| ..o *.Xo= .     |
|  .+= =E+++      |
+----[SHA256]-----+

## idea of ssh
you created your identity for this machine in the GitHub ecosystem.

You generated an SSH key pair:

Private key  → ~/.ssh/id_ed25519
Public key   → ~/.ssh/id_ed25519.pub

Think of it like this:

Public key   = your “ID card” (you can share it)
Private key  = your “secret key” (never share it)

Before this:

Ubuntu SSD → GitHub ❌ "Who are you?"

Now:

Ubuntu SSD → presents private key → GitHub checks your public key → access granted

⚠️ One important principle

Never expose this file:

~/.ssh/id_ed25519

But this one is safe to share:

~/.ssh/id_ed25519.pub

🚀 Next step (you’re not done yet)

Right now:

You created the key
BUT GitHub does not know it yet

So GitHub still says:

Permission denied (publickey)

👉 Do this now

Show your public key:

cat ~/.ssh/id_ed25519.pub

Copy the entire line.

Then go to:

👉 https://github.com/settings/keys

Click:

New SSH key

Fill:

Title: Standalone Ubuntu SSD Hitachi320
Key:   (paste your public key)
🔁 Then test again
ssh -T git@github.com

Expected result:

Hi itsyuen! You've successfully authenticated...
🧭 Why this matters for you specifically

You’re building:

ROS2 (Ubuntu SSD)
+ MATLAB (Windows)
+ C++ / Python nodes
+ STM32 later
+ GitHub integration

Without SSH, Git becomes friction.

With SSH, Git becomes:

invisible infrastructure

— which is exactly where you want it.