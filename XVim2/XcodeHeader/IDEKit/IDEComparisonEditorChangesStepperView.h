//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEEditorNumberStepperView.h>

@class DVTBindingToken, DVTDiffSession, DVTObservingToken, IDEComparisonEditorTimelineNavBar;

@interface IDEComparisonEditorChangesStepperView : IDEEditorNumberStepperView
{
    DVTBindingToken *_leftArrowEnabledToken;
    DVTBindingToken *_rightArrowEnabledToken;
    DVTObservingToken *_visibleModifiedDescriptorIndexesToken;
    DVTObservingToken *_selectedDiffDescriptorIndexToken;
    DVTDiffSession *_diffSession;
    IDEComparisonEditorTimelineNavBar *_timelineNavBar;
    unsigned long long _indexOfSelectedDiff;
}

+ (id)keyPathsForValuesAffectingCanSelectPrevious;
+ (id)keyPathsForValuesAffectingCanSelectNext;
+ (id)keyPathsForValuesAffectingIndexOfSelectedDiff;
- (void).cxx_destruct;
@property unsigned long long indexOfSelectedDiff; // @synthesize indexOfSelectedDiff=_indexOfSelectedDiff;
@property(retain) IDEComparisonEditorTimelineNavBar *timelineNavBar; // @synthesize timelineNavBar=_timelineNavBar;
@property(retain) DVTDiffSession *diffSession; // @synthesize diffSession=_diffSession;
- (void)primitiveInvalidate;
- (double)centerViewOverlap;
- (struct CGSize)centerViewSizeInHeight:(double)arg1;
- (void)invalidateLayout;
- (void)selectPrevious:(id)arg1;
- (void)selectNext:(id)arg1;
- (BOOL)canSelectPrevious;
- (BOOL)canSelectNext;
- (id)initWithFrame:(struct CGRect)arg1;

@end

