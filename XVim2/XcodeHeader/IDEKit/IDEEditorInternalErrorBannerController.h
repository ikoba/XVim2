//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEEditorBannerController.h>

@class NSDictionary, NSURL;
@protocol IDEEditorInternalErrorBannerControllerDelegate;

@interface IDEEditorInternalErrorBannerController : IDEEditorBannerController
{
    NSURL *_reportErrorURL;
    NSDictionary *_context;
    id <IDEEditorInternalErrorBannerControllerDelegate> _internalErrorDelegate;
}

+ (id)defaultComponent;
+ (id)defaultMessageText;
+ (id)defaultViewNibBundle;
+ (id)defaultViewNibName;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IDEEditorInternalErrorBannerControllerDelegate> internalErrorDelegate; // @synthesize internalErrorDelegate=_internalErrorDelegate;
@property(copy, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property(copy, nonatomic) NSURL *reportErrorURL; // @synthesize reportErrorURL=_reportErrorURL;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

@end

