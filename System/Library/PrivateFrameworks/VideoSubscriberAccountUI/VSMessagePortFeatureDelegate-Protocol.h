//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideoSubscriberAccountUI/NSObject-Protocol.h>

@class VSMessagePortFeature, VSScriptMessage;

@protocol VSMessagePortFeatureDelegate <NSObject>
- (void)messagePort:(VSMessagePortFeature *)arg1 didReceiveMessage:(VSScriptMessage *)arg2;
@end
