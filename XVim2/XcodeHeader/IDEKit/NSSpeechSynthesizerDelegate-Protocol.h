//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class NSSpeechSynthesizer, NSString;

@protocol NSSpeechSynthesizerDelegate <NSObject>

@optional
- (void)speechSynthesizer:(NSSpeechSynthesizer *)arg1 didEncounterSyncMessage:(NSString *)arg2;
- (void)speechSynthesizer:(NSSpeechSynthesizer *)arg1 didEncounterErrorAtIndex:(unsigned long long)arg2 ofString:(NSString *)arg3 message:(NSString *)arg4;
- (void)speechSynthesizer:(NSSpeechSynthesizer *)arg1 willSpeakPhoneme:(short)arg2;
- (void)speechSynthesizer:(NSSpeechSynthesizer *)arg1 willSpeakWord:(struct _NSRange)arg2 ofString:(NSString *)arg3;
- (void)speechSynthesizer:(NSSpeechSynthesizer *)arg1 didFinishSpeaking:(BOOL)arg2;
@end

