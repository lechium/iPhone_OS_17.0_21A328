//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SIRINLUEXTERNALSSU_INFERENCESsuInferenceRequest, SIRINLUEXTERNALSSU_INFERENCESsuInferenceSetup;

@protocol CDMSsuInferenceClient
- (void)processSsuInferenceRequest:(SIRINLUEXTERNALSSU_INFERENCESsuInferenceRequest *)arg1 completionHandler:(void (^)(SIRINLUEXTERNALSSU_INFERENCESsuInferenceResponse *, NSError *))arg2;
- (void)setupSsuInference:(SIRINLUEXTERNALSSU_INFERENCESsuInferenceSetup *)arg1 serviceStateDirectory:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
@end
