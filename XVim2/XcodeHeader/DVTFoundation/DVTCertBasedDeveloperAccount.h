//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTDeveloperAccount.h>

@class DVTSigningCertificate;

@interface DVTCertBasedDeveloperAccount : DVTDeveloperAccount
{
    struct __SecIdentity *_identity;
    DVTSigningCertificate *_certificate;
}

+ (id)accountWithIdentity:(struct __SecIdentity *)arg1;
- (void).cxx_destruct;
- (id)_sessionByLoggingIn:(id *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)username;
- (BOOL)isCertBased;
- (struct __SecIdentity *)identity;
- (id)certSerialNumber;
- (id)certCommonName;
- (void)dealloc;

@end

