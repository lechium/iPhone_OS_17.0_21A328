//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSAsset, NSData, NSDictionary;

@protocol _TtP18SpeakerRecognition26CSVTUIKeywordDetectorSwift_
- (NSData *)triggeredUtteranceWithVoiceTriggerEventInfo:(NSDictionary *)arg1;
- (void)reset;
- (NSDictionary *)analyzeWithBuffer:(NSData *)arg1;
- (id)initWithAsset:(CSAsset *)arg1;
@end

