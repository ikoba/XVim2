//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTLogAspect, DVTStackBacktrace, NSArray, NSString;
@protocol DVTSigningCertificateSourceDelegate;

@interface DVTSigningCertificateSource : NSObject <DVTInvalidation>
{
    BOOL _wantsAllApplicationsToAccessKeychainItems;
    id <DVTSigningCertificateSourceDelegate> _delegate;
    NSArray *_keychainSearchList;
    DVTLogAspect *_logAspect;
}

+ (BOOL)supportsInvalidationPrevention;
+ (id)_defaultKeychainSearchList;
+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) BOOL wantsAllApplicationsToAccessKeychainItems; // @synthesize wantsAllApplicationsToAccessKeychainItems=_wantsAllApplicationsToAccessKeychainItems;
@property(readonly) DVTLogAspect *logAspect; // @synthesize logAspect=_logAspect;
@property(readonly) NSArray *keychainSearchList; // @synthesize keychainSearchList=_keychainSearchList;
@property(retain, nonatomic) id <DVTSigningCertificateSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_keychainUnknownEvent;
- (void)_keychainCertificateTrustChanged:(struct __SecCertificate *)arg1;
- (void)_keychainKeyAddedOrDeleted;
- (void)_keychainCertificateDeleted:(struct __SecCertificate *)arg1;
- (void)_keychainCertificateAdded:(struct __SecCertificate *)arg1;
- (void)_stopListeningForKeychainEvents;
- (void)_startListeningForKeychainEvents;
- (void)_registerKeychainCallback;
- (id)_fetchSigningCertificates;
- (BOOL)_isCertificateAnIdentity:(id)arg1;
- (BOOL)_installPrivateKey:(struct __SecKey *)arg1 privateKeyName:(id)arg2 error:(id *)arg3;
- (BOOL)_installCertificate:(id)arg1 error:(id *)arg2;
- (BOOL)_installCertificate:(id)arg1 privateKey:(struct __SecKey *)arg2 keyName:(id)arg3 error:(id *)arg4;
- (struct __SecKeychain *)_installKeychain;
- (id)allSigningCertificates;
- (id)initWithKeychainSearchList:(id)arg1 wantsAllApplicationsToAccessKeychainItems:(BOOL)arg2 logAspect:(id)arg3;
- (id)initWithLogAspect:(id)arg1;
- (id)init;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

