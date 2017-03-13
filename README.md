This book is built in LaTeX.  It follows several conventions, so if you contribute, please follow these conventions.

 * Each sentence is on its own line.  Exceptions for this are for things like list items, where it makes more sense just to keep the whole list item on one line no matter how many sentences it is.  This makes version control *much* easier.
 * All of the circuits are built in iCircuit.  Sorry.  I couldn't find another way to draw circuits that wasn't terrible and produced nice results.  I'm open to ideas for changing, but I wanted a nice-looking book, and it will be a lot of work to change at this point.
 * All of the circuit drawings are exported to PNG using 600 DPI and with "transparent background" and "crop to elements" checked and "show voltage color" unchecked (basically, the exact opposite of the defaults).  600 DPI should make it more likely for the printer to not mess it up, though that is still questionable.
 * Then, I incorporate the image into the page, usually at scale=0.08.  When possible, I use the customer \simplegraphicsfigure macro, with parameters Title, Image (which should be the image name WITHOUT png), and Scale.  This produces a figure with an image, with the figure label figImageName, where ImageName is what you supplied.  NOTE - I switched to xelatex which allows PDF includes, so I am switching a lot of these images to PDFs instead.
 * Every chapter ends with a \reviewsection and \applysection
 * Every new term should be marked with \glossterm on its first usage, and the definition should be both in the main text and in the Glossary.  Note that these definitions should be similar enough to avoid confusion, but don't have to be identical.  
 * Try to avoid using *here* figures.  Instead refer to the figure by number using Figure~\ref{figureLabel}.

You can build it just by running the following command 2-3 times.

    ./build

