# Blackscreen

Blacken out all monitors except for the one where the mouse is located. I created this so I can watch movies without visual distractions. 

## Usage

1. Place your cursor on the screen that you do not want to blacken
2. Start `blackscreen`

Blackscreen will quit if any of its windows receive keyboard input, or if they get clicked on.

## Alternatives

Turn off the secondary monitors.

## i3wm

Moving a window to a certain monitor does not work in i3wm so instead, you should create rules in the config. Here are my rules:

```
assign [title="blackwindow-0-nice"] $ws2
assign [title="blackwindow-1-nice"] $ws10
assign [title="blackwindow-2-nice"] $ws1
```

A new window will be created for every monitor, except the one where the mouse cursor is. The windows will be called: ``blackwindow-n-nice``.