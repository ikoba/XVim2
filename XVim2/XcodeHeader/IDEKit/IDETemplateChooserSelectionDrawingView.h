//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray, NSColor;

@interface IDETemplateChooserSelectionDrawingView : NSView
{
    NSArray *_keyWindowNotificationTokens;
    BOOL _drawsBackground;
    double _cornerRadius;
    NSColor *_activeBackgroundColor;
    NSColor *_inactiveBackgroundColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSColor *inactiveBackgroundColor; // @synthesize inactiveBackgroundColor=_inactiveBackgroundColor;
@property(retain, nonatomic) NSColor *activeBackgroundColor; // @synthesize activeBackgroundColor=_activeBackgroundColor;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) BOOL drawsBackground; // @synthesize drawsBackground=_drawsBackground;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)updateColors:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;

@end

