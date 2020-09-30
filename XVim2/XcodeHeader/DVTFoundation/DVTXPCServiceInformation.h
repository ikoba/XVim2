//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTProcessInformation.h>

@class NSArray, NSDictionary, NSString;

@interface DVTXPCServiceInformation : DVTProcessInformation
{
    NSDictionary *_infoPlist;
    BOOL _startSuspended;
    BOOL _needsRoot;
    int _xpcParentPid;
    NSString *_xpcServiceName;
    NSDictionary *_environment;
    NSArray *_arguments;
    NSString *_pathToInterpose;
    NSString *_fullPath;
    NSString *_containerAppID;
    NSString *_appContainerPath;
}

- (void).cxx_destruct;
@property BOOL needsRoot; // @synthesize needsRoot=_needsRoot;
@property(retain) NSString *appContainerPath; // @synthesize appContainerPath=_appContainerPath;
@property(retain) NSString *containerAppID; // @synthesize containerAppID=_containerAppID;
@property(retain) NSString *fullPath; // @synthesize fullPath=_fullPath;
@property(retain) NSString *pathToInterpose; // @synthesize pathToInterpose=_pathToInterpose;
@property BOOL startSuspended; // @synthesize startSuspended=_startSuspended;
@property(retain) NSArray *arguments; // @synthesize arguments=_arguments;
@property(retain) NSDictionary *environment; // @synthesize environment=_environment;
@property(retain) NSString *xpcServiceName; // @synthesize xpcServiceName=_xpcServiceName;
@property int xpcParentPid; // @synthesize xpcParentPid=_xpcParentPid;
- (BOOL)isWidgetKitExtension;
- (BOOL)isWidgetExtension;
- (id)extensionType;
- (id)extensionInfo;
- (id)_infoPlist;
- (id)displayName;
- (id)description;
- (id)initWithServiceName:(id)arg1 pid:(int)arg2 parentPID:(int)arg3 appContainerPath:(id)arg4;

@end

