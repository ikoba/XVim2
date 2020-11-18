//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTKit/DVTLayerController.h>

#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/IDEActivityPopUpContentLayerDelegate-Protocol.h>
#import <IDEKit/IDEActivityViewDataConsumer-Protocol.h>

@class DVTStackBacktrace, IDEActivityViewDataSource, IDEWorkspaceDocument, NSMapTable, NSMutableArray, NSMutableSet, NSString;
@protocol IDEActivityPopUpContentLayerControllerDelegate;

@interface IDEActivityPopUpContentLayerController : DVTLayerController <IDEActivityViewDataConsumer, IDEActivityPopUpContentLayerDelegate, DVTInvalidation>
{
    IDEActivityViewDataSource *_dataSource;
    NSMutableSet *_completedReportsToShowInPopUpAfterMinimumTimeHasExpired;
    NSMapTable *_strongReportsToStrongReportLayers;
    NSMutableArray *_orderedDisplayedReports;
    NSMutableSet *_completedReportsInPopUp;
    IDEWorkspaceDocument *_workspaceDocument;
    id <IDEActivityPopUpContentLayerControllerDelegate> _delegate;
    double _spaceNeededForMultiActionIndicator;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) double spaceNeededForMultiActionIndicator; // @synthesize spaceNeededForMultiActionIndicator=_spaceNeededForMultiActionIndicator;
@property(retain) id <IDEActivityPopUpContentLayerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) IDEWorkspaceDocument *workspaceDocument; // @synthesize workspaceDocument=_workspaceDocument;
- (void)popUpContentLayer:(id)arg1 didChangePreferredHeightTo:(double)arg2;
- (void)doneButtonWasClickedInPopUpContentLayer:(id)arg1;
- (void)activityViewDataSource:(id)arg1 workspaceRepresentingTypeStringDidChangeTo:(id)arg2;
- (void)activityViewDataSource:(id)arg1 issueCountDidChangeForIssueCategory:(id)arg2;
- (void)activityViewDataSource:(id)arg1 displayDelayTimeWasMetForActivityReport:(id)arg2;
- (void)activityViewDataSource:(id)arg1 minimumDisplayTimeWasMetForActivityReport:(id)arg2;
- (void)activityReportManagerDidInvalidateForActivityViewDataSource:(id)arg1;
- (void)activityViewDataSource:(id)arg1 activityReportDidComplete:(id)arg2;
- (void)activityReportListDidChangeForActivityViewDataSource:(id)arg1;
- (void)makeReportInvisibleInPopUp:(id)arg1;
- (void)showCompletionStatusForCompletedReport:(id)arg1;
- (void)makeSureIssuesLayerIsVisible;
- (void)stopObservingActivityReports;
- (unsigned long long)visiblePopupReportCount;
- (void)updateDisplayedReports;
- (void)addReportToPopUp:(id)arg1;
- (void)removeReportFromPopUp:(id)arg1;
@property(readonly) double preferredHeight;
- (id)activityReportLayerForReport:(id)arg1;
- (void)setActivityReportLayer:(id)arg1 forReport:(id)arg2;
- (id)layer;
- (void)primitiveInvalidate;
- (void)updateTheme;
- (id)init;
- (void)loadLayer;
- (id)initWithWorkspaceDocument:(id)arg1 initialDataSource:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

