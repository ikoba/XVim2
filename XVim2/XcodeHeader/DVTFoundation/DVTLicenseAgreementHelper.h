//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DVTLicenseAgreementHelper : NSObject
{
    int _installedLicenseType;
    NSString *_installedLicenseID;
}

+ (BOOL)shouldShowLicenseAgreementForInstalledXcodeLicenseID:(id)arg1 lastAgreedToLicenseID:(id)arg2 installedXcodeVersion:(id)arg3 xcodeVersionForLastAgreedToLicense:(id)arg4;
- (void).cxx_destruct;
@property(readonly) NSString *installedLicenseID; // @synthesize installedLicenseID=_installedLicenseID;
@property(readonly) int installedLicenseType; // @synthesize installedLicenseType=_installedLicenseType;
- (BOOL)shouldShowLicenseAgreement;
@property(readonly) NSString *installedLicensePlistPath;
- (BOOL)agreeToLicense;
- (BOOL)_isLicensePlistImmutable;
- (id)_getLoggedInUserName;
- (BOOL)_isRunningAsSuperUser;
- (BOOL)_isRunningAppleInternalOS;
- (id)initWithLicenseInfoPath:(id)arg1;

@end

