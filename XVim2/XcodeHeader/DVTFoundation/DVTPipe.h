//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle;

@interface DVTPipe : NSObject
{
    NSFileHandle *_fileHandleForReading;
    NSFileHandle *_fileHandleForWriting;
}

+ (id)pipeReturningError:(id *)arg1;
- (void).cxx_destruct;
@property(readonly) NSFileHandle *fileHandleForWriting; // @synthesize fileHandleForWriting=_fileHandleForWriting;
@property(readonly) NSFileHandle *fileHandleForReading; // @synthesize fileHandleForReading=_fileHandleForReading;
- (void)closeBothFileHandles;
- (id)initWithReadHandle:(id)arg1 andWriteHandle:(id)arg2;

@end

