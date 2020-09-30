//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/DVTReplacementViewDelegate-Protocol.h>
#import <IDEKit/IDEProvisioningProfileDownloaderSourceListViewControllerDelegate-Protocol.h>

@class DVTObservingToken, DVTReplacementView, IDEProvisioningCompoundProfile, IDEProvisioningProfileDownloader, NSString;
@protocol IDEProvisioningProfileDownloaderDetailContainerViewControllerDelegate;

@interface IDEProvisioningProfileDownloaderDetailContainerViewController : IDEViewController <IDEProvisioningProfileDownloaderSourceListViewControllerDelegate, DVTReplacementViewDelegate>
{
    IDEProvisioningProfileDownloader *_downloader;
    DVTReplacementView *_replacementView;
    IDEProvisioningCompoundProfile *_compoundProfile;
    DVTObservingToken *_compoundProfileStateObserver;
    DVTObservingToken *_compoundProfileIsLocalProfileOutdatedObserver;
    id <IDEProvisioningProfileDownloaderDetailContainerViewControllerDelegate> _delegate;
    CDUnknownBlockType _updateReplacementViewBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType updateReplacementViewBlock; // @synthesize updateReplacementViewBlock=_updateReplacementViewBlock;
@property(retain, nonatomic) id <IDEProvisioningProfileDownloaderDetailContainerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) DVTObservingToken *compoundProfileIsLocalProfileOutdatedObserver; // @synthesize compoundProfileIsLocalProfileOutdatedObserver=_compoundProfileIsLocalProfileOutdatedObserver;
@property(retain, nonatomic) DVTObservingToken *compoundProfileStateObserver; // @synthesize compoundProfileStateObserver=_compoundProfileStateObserver;
@property(retain, nonatomic) IDEProvisioningCompoundProfile *compoundProfile; // @synthesize compoundProfile=_compoundProfile;
@property __weak DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
@property(retain, nonatomic) IDEProvisioningProfileDownloader *downloader; // @synthesize downloader=_downloader;
- (void)primitiveInvalidate;
- (void)replacementView:(id)arg1 willInstallViewController:(id)arg2;
- (void)didSelectProfile:(id)arg1;
- (void)updateEmptyContentViewWithTitle:(id)arg1 subtitle:(id)arg2 buttonTitle:(id)arg3 resolutionBlock:(CDUnknownBlockType)arg4;
- (void)updateEmptyContentViewWithDownloadPreviewError;
- (void)updateEmptyContentViewWithBusyState;
- (void)updateDetailViewWithSelectedProfile;
- (void)updateReplacementViewForStateChange;
- (void)setupObservations;
- (void)viewDidLoad;
- (id)initWithDownloader:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

