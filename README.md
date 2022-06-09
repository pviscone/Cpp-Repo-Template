<a href="https://pviscone.github.io/Cpp-Repo-Template/">
  <img align="center" src="https://img.shields.io/badge/-Docs-green!" />
</a>
<a href="https://github.com/pviscone/Cpp-Repo-Template/actions/workflows/cmake.yml">
  <img align="center" src="https://github.com/pviscone/Cpp-Repo-Template/actions/workflows/cmake.yml/badge.svg?event=push" />
</a>


# TestWorkflow
A Repo Template for c++ project

The main features are:

- Makefile generation with CMake
- Static analyzer through compiler flags ( gdwarf-4 -fPIC -Wno-deprecated -pipe -fno-elide-type -fdiagnostics-show-template-tree -Wall  -Wextra -Wpedantic -Wvla -Wextra-semi -Wnull-dereference )

- Continuous integration with github action (build exploiting ccache)
- Autodoc and docs deployment with github action and github pages
- Testing with Catch2
- Build script to automatize makefile generation, docs deployment and building exploiting all existing threads

## Achtung!!!!

- Actions run on push to main branch and on pull request. **Work in a different branch and then merge to avoid useless waste of machine time**

- When you push on the main branch the new documentation will be deployed in the main branch **so you have to pull to avoid future conflicts**

  (*An alternative could be set github page on a different branch gh-pages dedicated only to documentation. If you want to do it, you have to change also the action that deploy the documentation*)

**Things to do when you create a new repository**:

1. Set github pages in /docs of the main branch
2. modify the badge' s links in the ReadMe.md to match the name of the new repo
