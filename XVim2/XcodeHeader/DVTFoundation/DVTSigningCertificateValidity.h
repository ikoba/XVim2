//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface DVTSigningCertificateValidity : NSObject
{
    BOOL _isValid;
    NSError *_validityError;
}

+ (id)validityWithIsValid:(BOOL)arg1 error:(id)arg2;
- (void).cxx_destruct;
@property(readonly) NSError *validityError; // @synthesize validityError=_validityError;
@property(readonly) BOOL isValid; // @synthesize isValid=_isValid;
- (id)initWithIsValid:(BOOL)arg1 validityError:(id)arg2;

@end

