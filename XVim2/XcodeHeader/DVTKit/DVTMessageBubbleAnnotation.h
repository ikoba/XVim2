//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTKit/DVTTextAnnotation.h>

@class NSImage, NSString;
@protocol DVTMessageBubbleAnnotationDelegate;

@interface DVTMessageBubbleAnnotation : DVTTextAnnotation
{
    NSString *_messageBubbleText;
    NSImage *_messageBubbleIcon;
    BOOL _miniaturized;
    BOOL _drawsHelpButton;
    BOOL _wantsPreferredSizeAndPosition;
    BOOL _wantsFlatStyle;
    long long _messageBubbleTextAlignment;
    id _helpIDOrURL;
    NSString *_messageBubbleToolTipText;
}

- (void).cxx_destruct;
@property BOOL wantsFlatStyle; // @synthesize wantsFlatStyle=_wantsFlatStyle;
@property BOOL wantsPreferredSizeAndPosition; // @synthesize wantsPreferredSizeAndPosition=_wantsPreferredSizeAndPosition;
@property(copy, nonatomic) NSString *messageBubbleToolTipText; // @synthesize messageBubbleToolTipText=_messageBubbleToolTipText;
@property(nonatomic) BOOL drawsHelpButton; // @synthesize drawsHelpButton=_drawsHelpButton;
@property(copy, nonatomic) id helpIDOrURL; // @synthesize helpIDOrURL=_helpIDOrURL;
@property(retain, nonatomic) NSImage *messageBubbleIcon; // @synthesize messageBubbleIcon=_messageBubbleIcon;
@property long long messageBubbleTextAlignment; // @synthesize messageBubbleTextAlignment=_messageBubbleTextAlignment;
@property(copy, nonatomic) NSString *messageBubbleText; // @synthesize messageBubbleText=_messageBubbleText;
@property(nonatomic, getter=isMiniaturized) BOOL miniaturized; // @synthesize miniaturized=_miniaturized;
- (id)annotationDisplayDescription;
@property(retain) id <DVTMessageBubbleAnnotationDelegate> delegate;
- (void)fontAndColorThemeChanged:(id)arg1;
- (void)invalidateDisplayAndLayoutIfNeeded:(BOOL)arg1;
- (void)setNeedsInvalidate;
- (id)currentStateInTextView:(id)arg1;
- (BOOL)drawsHighlightedRanges;
- (void)drawLineHighlightInRect:(struct CGRect)arg1 textView:(id)arg2;
- (BOOL)drawsLineHighlight;
- (struct CGRect)sidebarMarkerRectForFirstLineRect:(struct CGRect)arg1;
- (double)preferredWidthForAvailableWidth:(double)arg1;
- (void)setVisible:(BOOL)arg1;
- (BOOL)wantsMergeAnnotations;
@property int messageBubbleStackPolicy;
- (id)init;

@end

