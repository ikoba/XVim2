//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class IDESourceCodeGenerationCompositeResult, NSDictionary, NSString;

@protocol IDEMethodSourceCodeGenerator
- (IDESourceCodeGenerationCompositeResult *)prepareToAddClassMethodWithName:(NSString *)arg1 inClassNamed:(NSString *)arg2 options:(NSDictionary *)arg3 error:(id *)arg4;
- (IDESourceCodeGenerationCompositeResult *)prepareToAddInstanceMethodWithName:(NSString *)arg1 inClassNamed:(NSString *)arg2 options:(NSDictionary *)arg3 error:(id *)arg4;
@end

