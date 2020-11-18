//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTXMLUnarchiving-Protocol.h>

@class NSMutableSet, NSString;

@interface IDEVariablesViewContextState : NSObject <DVTXMLUnarchiving>
{
    NSString *_contextName;
    NSMutableSet *_expandedNodePaths;
    NSMutableSet *_persistentStrings;
}

- (void).cxx_destruct;
@property(readonly) NSMutableSet *persistentStrings; // @synthesize persistentStrings=_persistentStrings;
@property(readonly) NSString *contextName; // @synthesize contextName=_contextName;
- (void)addPersistentStrings:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
@property(readonly) BOOL isEmpty;
- (BOOL)isNodeExpanded:(id)arg1;
- (void)nodeExpandedStateChanged:(id)arg1;
- (void)_variablesViewContextStateCommonInit;
- (id)initWithContextName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

