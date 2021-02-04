//The root eBay search url  0
http://search.ebay.com/cgi-bin/texis/ebay/results.html
// The message about no item found  1
We're sorry, but currently there are no
// Finds the number found uses GetIntBetween the next 2 are for this  2 3
<!--$minder-save$-->
<!--$/minder-save$-->
// read ebays current time url 4
http://cgi3.ebay.com/aw-cgi/eBayISAPI.dll?TimeShow
// looking for the time value  uses MovePastStringFrom; we will record the offset and string 5 6
0
Look here to see what time eBay thinks it is.<p>At the tone, the time will be... 
// Now we actually get the time string using GetStringBetweenFromOffset 7 8
<b>
</b>
//Get the time from the actual page uses GetStringBetween 9 10
Current Auctions\n(\n
\n)
// Now we move past string from offset MovePastStringFrom we will set both 11 12
0
<!--$minder-save$-->
// Now we look for another minder save with MovePastStringFrom this is a setup for parsing the table 13  
<!--$minder-save$-->
// After parsing the table we will extract the url and text in one loop parse table pulls
// in a lot of stuff we don't need so to find the url we use this string uses a CString.Find 14
ViewItem&item=










