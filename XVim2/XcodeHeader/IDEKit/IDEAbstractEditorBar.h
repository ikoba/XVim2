//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTStructuredLayoutKit/DVTStructuredLayoutView.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTBorderedView, DVTStackBacktrace, IDEControlGroup, IDEEditorContext, NSString, NSVisualEffectView;

@interface IDEAbstractEditorBar : DVTStructuredLayoutView <DVTInvalidation>
{
    BOOL _controlGroupExplicitlyInvalidated;
    unsigned long long _leftControlGroupVisibilityState;
    unsigned long long _rightControlGroupVisibilityState;
    BOOL _drawsTopBorder;
    BOOL _drawsBottomBorder;
    BOOL _drawsLeftBorder;
    IDEEditorContext *_editorContext;
    IDEControlGroup *_leftControlGroup;
    IDEControlGroup *_rightControlGroup;
    DVTBorderedView *_centerContentView;
    NSVisualEffectView *_backgroundView;
}

+ (id)_createSpacerViewWithWidth:(double)arg1;
+ (id)_createSeparator;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain) NSVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain) DVTBorderedView *centerContentView; // @synthesize centerContentView=_centerContentView;
@property(retain) IDEControlGroup *rightControlGroup; // @synthesize rightControlGroup=_rightControlGroup;
@property(retain) IDEControlGroup *leftControlGroup; // @synthesize leftControlGroup=_leftControlGroup;
@property(nonatomic) BOOL drawsLeftBorder; // @synthesize drawsLeftBorder=_drawsLeftBorder;
@property(nonatomic) BOOL drawsBottomBorder; // @synthesize drawsBottomBorder=_drawsBottomBorder;
@property(nonatomic) BOOL drawsTopBorder; // @synthesize drawsTopBorder=_drawsTopBorder;
@property(retain) IDEEditorContext *editorContext; // @synthesize editorContext=_editorContext;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (id)dvt_subviewsOrderedForLayout;
- (void)dvt_positionSubviewsAndSizeSelfAfterSubviewLayout;
- (void)dvt_willLayoutSubview:(id)arg1;
- (void)dvt_configureSubviewsBeforeSubviewLayout;
- (unsigned long long)leftControlGroupVisibility;
- (unsigned long long)rightControlGroupVisibility;
- (void)invalidateControlGroups;
- (void)_rebuildRightControlGroupWithVisibility:(unsigned long long)arg1;
- (void)_rebuildLeftControlGroupWithVisibility:(unsigned long long)arg1;
- (id)_debugRightControlGroupVisibilityString:(unsigned long long)arg1;
- (id)_debugLeftControlGroupVisibilityString:(unsigned long long)arg1;
- (BOOL)wantsUpdateLayer;
- (void)viewWillDraw;
- (void)primitiveInvalidate;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_IDEAbstractEditorBarSharedInit;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
