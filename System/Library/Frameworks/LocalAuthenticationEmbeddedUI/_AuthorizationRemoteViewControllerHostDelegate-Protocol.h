//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocalAuthenticationEmbeddedUI/NSObject-Protocol.h>

@class NSError;

@protocol _AuthorizationRemoteViewControllerHostDelegate <NSObject>
- (void)sheetDidFinishWithError:(NSError *)arg1;
- (void)didProvideAuthorizationRequirementWithReply:(void (^)(NSError *))arg1;
@end

