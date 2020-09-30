//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTKit/DVTAnnotationProvider.h>

#import <IDEKit/DVTTextAnnotationDelegate-Protocol.h>
#import <IDEKit/IDETestsInFileObserver-Protocol.h>
#import <IDEKit/_TtP6IDEKit38IDETestingAnnotationActionMenuDelegate_-Protocol.h>

@class IDEAnnotationContext, NSString, NSURL, _TtC6IDEKit30IDETestingAnnotationActionMenu;

@interface IDETestingAnnotationProvider : DVTAnnotationProvider <_TtP6IDEKit38IDETestingAnnotationActionMenuDelegate_, DVTTextAnnotationDelegate, IDETestsInFileObserver>
{
    IDEAnnotationContext *_context;
    NSURL *_fileURL;
    _TtC6IDEKit30IDETestingAnnotationActionMenu *_currentActionMenu;
}

+ (id)annotationProviderForContext:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(retain) _TtC6IDEKit30IDETestingAnnotationActionMenu *currentActionMenu; // @synthesize currentActionMenu=_currentActionMenu;
@property(retain) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain) IDEAnnotationContext *context; // @synthesize context=_context;
- (void)testingAnnotationActionMenuDidClose:(id)arg1;
- (void)testingAnnotationActionMenu:(id)arg1 didSelectTestCollection:(id)arg2 testPlanConfigurations:(id)arg3;
- (void)annotation:(id)arg1 willDrawInTextSidebarView:(id)arg2 withAnnotationsInSameLine:(id)arg3;
- (id)contextMenuItemsForAnnotation:(id)arg1 inTextSidebarView:(id)arg2;
- (BOOL)shouldMoveCursorForAnnotation:(id)arg1;
- (void)didEndRolloverOnAnnotation:(id)arg1 inTextSidebarView:(id)arg2 event:(id)arg3;
- (void)didBeginRolloverOnAnnotation:(id)arg1 inTextSidebarView:(id)arg2 event:(id)arg3;
- (BOOL)_shouldAllowLaunchingTests;
- (void)presentActionMenu:(id)arg1 textSidebar:(id)arg2 annotation:(id)arg3;
- (void)didClickAnnotation:(id)arg1 inTextSidebar:(id)arg2 event:(id)arg3;
- (void)_runTestCollection:(id)arg1 testPlanConfigurations:(id)arg2 contextPrefix:(id)arg3;
- (void)allTestablesChanged;
- (void)testsChanged:(id)arg1;
- (void)testLocationsInFileUpdated:(id)arg1;
- (void)providerWillUninstall;
- (void)_clearAnnotations;
@property(readonly, copy) NSString *description;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 fileURL:(id)arg2;
- (id)_createAnnotationForTestLocation:(id)arg1 usingTestManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

