//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowEditor/NSObject-Protocol.h>

@class WFParameterStateProcessingContext;

@protocol WFVariableStringContent <NSObject>
- (unsigned long long)wf_lengthInVariableString;
- (void)wf_getContentItemsWithContext:(WFParameterStateProcessingContext *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
@end
