//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESourceEditor/NSObject-Protocol.h>

@class NSString;

@protocol IDEConsoleTextViewStandardIODelegate <NSObject>
- (void)showNextCommandFromHistory:(id)arg1;
- (void)showPreviousCommandFromHistory:(id)arg1 currentStringAfterPrompt:(NSString *)arg2;
- (void)consoleView:(id)arg1 didEndText:(NSString *)arg2 forDebugger:(BOOL)arg3 trackHistory:(BOOL)arg4;
@property(nonatomic, readonly) BOOL tracksInputHistoryForDebugger;
@end

