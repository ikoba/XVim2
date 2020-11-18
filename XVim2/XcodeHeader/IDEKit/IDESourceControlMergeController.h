//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTFilePath, DVTStackBacktrace, NSString;

@interface IDESourceControlMergeController : NSObject <DVTInvalidation>
{
    DVTFilePath *_mergeDataPath;
}

+ (void)initialize;
+ (void)copyItemAtFilePath:(id)arg1 toFilePath:(id)arg2;
+ (void)moveItemAtFilePath:(id)arg1 toFilePath:(id)arg2;
+ (id)mergeDataDictionary:(id)arg1;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)pathToFileWrapper:(id)arg1 inMergeData:(id)arg2;
- (void)removeMergeDataForFilePath:(id)arg1;
- (void)setMergeData:(id)arg1 forFilePath:(id)arg2;
- (id)mergeDataForFilePath:(id)arg1;
@property(readonly) DVTFilePath *mergeDataPath;
- (void)_validateMergeData:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

