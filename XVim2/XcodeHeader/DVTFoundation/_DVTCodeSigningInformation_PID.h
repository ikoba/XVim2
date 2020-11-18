//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTCodeSigningInformation.h>

@class DVTCodeSignatureValidity, NSNumber;

@interface _DVTCodeSigningInformation_PID : DVTCodeSigningInformation
{
    NSNumber *_appleSigned;
    DVTCodeSignatureValidity *_validity;
    int _processID;
}

+ (id)codeSigningDictionaryForProcessID:(int)arg1 additionalCSFlags:(unsigned int)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(readonly) int processID; // @synthesize processID=_processID;
- (id)architecturesWithError:(id *)arg1;
- (id)validity;
- (id)codeSigningDictionaryWithAdditionalCSFlags:(unsigned int)arg1 architecture:(id)arg2 error:(id *)arg3;
- (BOOL)isAppleSigned;
- (id)initWithProcessID:(int)arg1 error:(id *)arg2;
- (id)shortDescription;

@end

