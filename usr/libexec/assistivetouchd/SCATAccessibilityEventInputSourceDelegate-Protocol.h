//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCATInputSourceDelegate-Protocol.h"

@class SCATAccessibilityEventInputSource;

@protocol SCATAccessibilityEventInputSourceDelegate <SCATInputSourceDelegate>
- (void)accessibilityEventInputSource:(SCATAccessibilityEventInputSource *)arg1 didReceiveActionWithIdentifier:(long long)arg2 start:(_Bool)arg3 ignoreInputHold:(_Bool)arg4;
@end

