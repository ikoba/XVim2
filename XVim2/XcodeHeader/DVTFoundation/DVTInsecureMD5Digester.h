//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTDataDigester.h>

@interface DVTInsecureMD5Digester : DVTDataDigester
{
    struct CC_MD5state_st _ctxt;
}

- (id)digest;
- (void)updateWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)init;

@end

