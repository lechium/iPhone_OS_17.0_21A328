//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocalAuthenticationEmbeddedUI/NSObject-Protocol.h>

@class LAPSFetchNewPasscodeRequest, LAPSFetchOldPasscodeRequest;
@protocol LAPSPasscodeChangeUIDelegate;

@protocol LAPSPasscodeChangeUI <NSObject>
@property(nonatomic) __weak id <LAPSPasscodeChangeUIDelegate> delegate;
- (void)deactivateWithCompletion:(void (^)(void))arg1;
- (void)fetchNewPasscode:(LAPSFetchNewPasscodeRequest *)arg1 completion:(void (^)(LAPSFetchNewPasscodeResult *, NSError *))arg2;
- (void)fetchOldPasscode:(LAPSFetchOldPasscodeRequest *)arg1 completion:(void (^)(LAPSFetchOldPasscodeResult *, NSError *))arg2;
@end

