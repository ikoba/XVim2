//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEFilePickerViewDelegate-Protocol.h>

@class NSString;

@interface IDEBlueprintPickerFilePickerDelegate : NSObject <IDEFilePickerViewDelegate>
{
    CDUnknownBlockType _enabledBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType enabledBlock; // @synthesize enabledBlock=_enabledBlock;
- (void)filePickerView:(id)arg1 outlineView:(id)arg2 willDisplayCell:(id)arg3 forTableColumn:(id)arg4 item:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

