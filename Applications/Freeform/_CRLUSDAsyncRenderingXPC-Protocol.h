//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@protocol _CRLUSDAsyncRenderingXPC
- (void)takeSnapshotAt:(float)arg1 response:(void (^)(NSData *, NSError *))arg2;
- (void)performActions:(NSData *)arg1 response:(void (^)(NSError *))arg2;
- (void)updateScene:(NSData *)arg1 response:(void (^)(NSError *))arg2;
- (void)loadScene:(NSData *)arg1 response:(void (^)(NSError *))arg2;
- (void)getUUID:(void (^)(NSUUID *, NSError *))arg1;
@end

