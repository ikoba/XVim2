//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/_TtC13IDEFoundation27IDEEnvironmentVariableEntry.h>

#import <IDEKit/NSPasteboardReading-Protocol.h>
#import <IDEKit/NSPasteboardWriting-Protocol.h>

@class NSString;

@interface _TtC13IDEFoundation27IDEEnvironmentVariableEntry (NSPasteboardSupport) <NSPasteboardReading, NSPasteboardWriting>
+ (unsigned long long)readingOptionsForType:(id)arg1 pasteboard:(id)arg2;
+ (id)readableTypesForPasteboard:(id)arg1;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (id)initWithPasteboardPropertyList:(id)arg1 ofType:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

