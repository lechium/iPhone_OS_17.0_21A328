//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FACircleStateResponse;

@protocol FARemoteViewControllerProtocol
- (void)dismissAlertProxyWithCompletion:(void (^)(void))arg1;
- (void)presentAlertProxyWithCompletion:(void (^)(void))arg1;
- (void)dismissWithCompletion:(void (^)(void))arg1;
- (void)replaceModalRUIControllerWithStyle:(unsigned long long)arg1 byController:(unsigned long long)arg2 completion:(void (^)(void))arg3;
- (void)presentWithRUIModalPresentationStyle:(unsigned long long)arg1 completion:(void (^)(void))arg2;
- (void)operationFinishedWithResponse:(FACircleStateResponse *)arg1;
@end
