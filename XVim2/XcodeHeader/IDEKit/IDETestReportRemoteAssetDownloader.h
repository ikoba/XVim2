//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface IDETestReportRemoteAssetDownloader : NSObject
{
    NSOperationQueue *_queue;
    CDUnknownBlockType _callback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void)cancelDownloads;
- (void)downloadAttachments:(id)arg1 forTest:(id)arg2 inActivity:(id)arg3 destinationDirectory:(id)arg4;

@end

