//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol FPDLifetimeExtender <NSObject>
@property(readonly) NSString *prettyDescription;
@property(readonly) int requestEffectivePID;

@optional
@property unsigned long long timeoutState;
@property(readonly) double timeout;
@end

