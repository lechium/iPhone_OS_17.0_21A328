//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActionKit/WFBookmarkableSetting-Protocol.h>
#import <ActionKit/WFBooleanStateSetting-Protocol.h>

@class WFSettingsClientBookmark;

@protocol WFReversibleBooleanStateSetting <WFBooleanStateSetting, WFBookmarkableSetting>
+ (void)getReversalStateWithBookmark:(WFSettingsClientBookmark *)arg1 completionHandler:(void (^)(NSNumber *, NSError *))arg2;
@end

