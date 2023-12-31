//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAssetImageGenerator, NSArray, NSMutableArray, VCPColorNormalizationAnalyzer, VCPMovieHighlight;

__attribute__((visibility("hidden")))
@interface VCPMovieHighlightAnalyzer : NSObject
{
    NSArray *_junkResults;	// 8 = 0x8
    NSArray *_qualityResults;	// 16 = 0x10
    NSArray *_faceResults;	// 24 = 0x18
    NSArray *_petsResults;	// 32 = 0x20
    NSArray *_saliencyResults;	// 40 = 0x28
    NSArray *_actionResults;	// 48 = 0x30
    NSArray *_subtleMotionResults;	// 56 = 0x38
    NSArray *_voiceResults;	// 64 = 0x40
    NSArray *_featureResults;	// 72 = 0x48
    NSArray *_humanActionResults;	// 80 = 0x50
    NSArray *_humanPoseResults;	// 88 = 0x58
    NSArray *_cameraMotionResults;	// 96 = 0x60
    NSArray *_keyFrameResults;	// 104 = 0x68
    NSArray *_sceneResults;	// 112 = 0x70
    NSArray *_orientationResults;	// 120 = 0x78
    NSArray *_mlHighlightScoreResults;	// 128 = 0x80
    NSArray *_mlQualityResults;	// 136 = 0x88
    NSMutableArray *_expressionSegments;	// 144 = 0x90
    NSMutableArray *_internalResults;	// 152 = 0x98
    NSMutableArray *_highlightResults;	// 160 = 0xa0
    NSMutableArray *_internalConstraintResults;	// 168 = 0xa8
    struct CGSize _frameSize;	// 176 = 0xb0
    float _maxDurationInSeconds;	// 192 = 0xc0
    float _minDurationInSeconds;	// 196 = 0xc4
    float _targetDurationInSeconds;	// 200 = 0xc8
    float _toleranceInSeconds;	// 204 = 0xcc
    int _targetHighlightIndex;	// 208 = 0xd0
    CDStruct_e83c9415 _startRange;	// 212 = 0xd4
    _Bool _isMaxTrim;	// 260 = 0x104
    _Bool _requestBestTrim;	// 261 = 0x105
    _Bool _requestFullResult;	// 262 = 0x106
    float _maxHighlightScore;	// 264 = 0x108
    float _minHighlightScore;	// 268 = 0x10c
    _Bool _isLivePhoto;	// 272 = 0x110
    float _photoOffset;	// 276 = 0x114
    _Bool _verbose;	// 280 = 0x118
    _Bool _hadFlash;	// 281 = 0x119
    _Bool _hadZoom;	// 282 = 0x11a
    _Bool _settlingHadZoom;	// 283 = 0x11b
    _Bool _isTimelapse;	// 284 = 0x11c
    CDStruct_e83c9415 _preferredTimeRange;	// 288 = 0x120
    AVAssetImageGenerator *_imageGenerator;	// 336 = 0x150
    int _numberOfFrames;	// 344 = 0x158
    VCPMovieHighlight *_animatedStickerGating;	// 352 = 0x160
    float _sumScores[3];	// 360 = 0x168
    int _frameCount;	// 372 = 0x174
    array_bb4fff4b _prevMotionParamDiff;	// 376 = 0x178
    array_bb4fff4b _sumMotionParam;	// 400 = 0x190
    array_bb4fff4b _diffFlipCount;	// 424 = 0x1a8
    VCPColorNormalizationAnalyzer *_colorNormalizationAnalyzer;	// 448 = 0x1c0
}

+ (_Bool)isHeuristicStickerScoreEnabled;	// IMP=0x0060000000115ff2
+ (float)getMinimumHighlightInSec;	// IMP=0x0060000000115fe4
- (void).cxx_destruct;	// IMP=0x000000000012e3ed
- (float)junkScoreForTimerange:(CDStruct_e83c9415)arg1 lengthScale:(_Bool)arg2;	// IMP=0x000000000012e011
- (float)subtleMotionScoreForTimerange:(CDStruct_e83c9415)arg1;	// IMP=0x000000000012d392
- (float)cameraMotionScoreForTimerange:(CDStruct_e83c9415)arg1;	// IMP=0x000000000012cad1
- (float)visualPleasingScoreForTimerange:(CDStruct_e83c9415)arg1;	// IMP=0x000000000012c851
- (float)voiceScoreForTimerange:(CDStruct_e83c9415)arg1;	// IMP=0x000000000012c7e5
- (float)actionScoreForTimerange:(CDStruct_e83c9415)arg1;	// IMP=0x000000000012bfce
- (float)qualityScoreForTimerange:(CDStruct_e83c9415)arg1;	// IMP=0x000000000012bbd7
- (float)analyzeOverallQuality:(CDStruct_e83c9415)arg1 isSettlingEffect:(_Bool)arg2 isAnimatedSticker:(_Bool)arg3;	// IMP=0x000000000012b65f
- (float)stickerScaledScore:(float)arg1 highPrecisionThreshold:(float)arg2 highRecallThreshold:(float)arg3;	// IMP=0x000000000012b5fc
- (float)computeMLQualityScoreForTimerange:(CDStruct_e83c9415)arg1;	// IMP=0x000000000012b1bd
- (float)computeMLHighlightScoreForTimerange:(CDStruct_e83c9415)arg1;	// IMP=0x000000000012aca5
- (int)combineMLHighlightScore;	// IMP=0x000000000012aa1f
- (int)postProcessMLHighlightScore;	// IMP=0x000000000012a4d3
- (float)computeVoiceScoreInTimeRange:(CDStruct_e83c9415)arg1;	// IMP=0x000000000012a13c
- (float)computeHumanPoseScoreInTimerange:(CDStruct_e83c9415)arg1;	// IMP=0x0000000000129c4e
- (float)computeHumanActionScoreInTimerange:(CDStruct_e83c9415)arg1;	// IMP=0x0000000000129333
- (float)computeActionScoreInTimerange:(CDStruct_e83c9415)arg1;	// IMP=0x0000000000128e6c
- (float)computeSubtleMotionScoreInTimerange:(CDStruct_e83c9415)arg1;	// IMP=0x00000000001289a5
- (float)expressionScoreForTimerange:(CDStruct_e83c9415)arg1;	// IMP=0x00000000001286e0
- (float)computeExpressionScoreInTimerange:(CDStruct_e83c9415)arg1;	// IMP=0x00000000001281e6
- (void)computeHighlightScoreOfSegment:(id)arg1;	// IMP=0x0000000000127561
- (_Bool)addSegment:(id)arg1;	// IMP=0x00000000001272f3
- (int)evaluateSegment:(id)arg1;	// IMP=0x0000000000126a15
- (void)searchFeatureVectorOfSegment:(id)arg1;	// IMP=0x00000000001264ea
- (int)pickHighlightsFrom:(id)arg1;	// IMP=0x0000000000125e52
- (int)computeHighlightScoreResults;	// IMP=0x000000000012566c
- (id)pickKeyFramesInRange:(CDStruct_e83c9415)arg1;	// IMP=0x00000000001253de
- (void)SetKeyFramesForSegments:(id)arg1;	// IMP=0x00000000001252a5
- (float)computeHighlightScoreOfRange:(CDStruct_e83c9415)arg1;	// IMP=0x000000000012505b
- (_Bool)checkCameraZoom:(CDStruct_e83c9415)arg1;	// IMP=0x0000000000124cb1
- (CDStruct_e83c9415)computeSteadyTranslationTrimFor:(CDStruct_e83c9415)arg1;	// IMP=0x00000000001242a1
- (CDStruct_e83c9415)computeActionFaceTrimFor:(CDStruct_e83c9415)arg1;	// IMP=0x0000000000122537
- (CDStruct_e83c9415)computeQualityTrimFor:(CDStruct_e83c9415)arg1 withKeyFrame:(_Bool)arg2;	// IMP=0x0000000000121865
- (void)generateExpressionSegments:(CDStruct_e83c9415)arg1;	// IMP=0x0000000000120cdc
- (id)highlightScoreResults;	// IMP=0x0000000000120ccb
- (id)results;	// IMP=0x0000000000120cba
- (struct CGRect)computeBestPlaybackCrop:(CDStruct_e83c9415)arg1;	// IMP=0x00000000001207da
- (_Bool)updateCropHeatMap:(float *)arg1 withResults:(id)arg2 timeRange:(CDStruct_e83c9415)arg3 resultsKey:(id)arg4;	// IMP=0x000000000011ff16
- (id)settlingEffects;	// IMP=0x000000000011fb3d
- (float)rankingLevel;	// IMP=0x000000000011f8df
- (int)analyzeMotionStability:(array_bb4fff4b)arg1 motionParamDiff:(array_bb4fff4b)arg2;	// IMP=0x000000000011f85c
- (int)analyzeRankingScores:(float)arg1 subtleMotion:(float)arg2 humanAction:(float)arg3;	// IMP=0x000000000011f7dd
- (float)settlingSharpnessScore:(CDStruct_e83c9415)arg1;	// IMP=0x000000000011f57a
- (float)settlingExposureChangeScore:(CDStruct_e83c9415)arg1;	// IMP=0x000000000011f1b5
- (float)settlingSubjectScore:(CDStruct_e83c9415)arg1;	// IMP=0x000000000011e202
- (float)settlingMotionScore:(CDStruct_e83c9415)arg1;	// IMP=0x000000000011e0cf
- (id)animatedStickerGating;	// IMP=0x000000000011e0be
- (id)movieSummary;	// IMP=0x000000000011d474
- (CDStruct_e83c9415)findBestTrim:(CDStruct_e83c9415)arg1;	// IMP=0x000000000011c458
- (id)findBestHighlightSegment:(CDStruct_e83c9415)arg1 targetTrim:(_Bool)arg2;	// IMP=0x000000000011be36
- (float)highlightScoreForTimeRange:(CDStruct_e83c9415)arg1 average:(_Bool)arg2;	// IMP=0x000000000011b948
- (int)computeColorNormalization;	// IMP=0x000000000011b4da
- (int)selectHighlights;	// IMP=0x000000000011a813
- (CDStruct_e83c9415)computeTrimWithHighlightScoreFor:(CDStruct_e83c9415)arg1;	// IMP=0x000000000011a2e9
- (int)selectHighlightsForTimelapse;	// IMP=0x0000000000119e58
- (void)loadHighlightScoreResults:(id)arg1;	// IMP=0x0000000000119be2
- (id)maxTrimMovieHighlight:(id)arg1;	// IMP=0x00000000001193e5
- (id)targetTrimRange:(CDStruct_e83c9415)arg1 searchRange:(CDStruct_e83c9415)arg2;	// IMP=0x0000000000118b0a
- (id)targetExtendRange:(CDStruct_e83c9415)arg1 maxRange:(CDStruct_e83c9415)arg2;	// IMP=0x000000000011886b
- (id)targetProcessRange:(CDStruct_e83c9415)arg1 maxRange:(CDStruct_e83c9415)arg2;	// IMP=0x000000000011872c
- (id)targetMovieHighlight:(id)arg1 mergedRange:(CDStruct_e83c9415)arg2 maxRange:(CDStruct_e83c9415)arg3;	// IMP=0x0000000000118423
- (id)postProcessMovieHighlight:(id)arg1;	// IMP=0x00000000001173f5
- (_Bool)isGoodQuality:(CDStruct_e83c9415)arg1;	// IMP=0x0000000000117021
- (int)generateHighlights;	// IMP=0x0000000000116dac
- (int)prepareRequiredQualityResult:(id)arg1 junkDetectionResult:(id)arg2 descriptorResult:(id)arg3 faceResult:(id)arg4 petsResult:(id)arg5 saliencyResult:(id)arg6 actionResult:(id)arg7 subtleMotionResult:(id)arg8 voiceResult:(id)arg9 keyFrameResult:(id)arg10 sceneResults:(id)arg11 humanActionResults:(id)arg12 humanPoseResults:(id)arg13 cameraMotionResults:(id)arg14 orientationResults:(id)arg15 mlHighlightScoreResults:(id)arg16 mlQualityResults:(id)arg17 frameSize:(struct CGSize)arg18;	// IMP=0x0000000000116a2d
- (void)setMaxHighlightDuration:(float)arg1;	// IMP=0x0000000000116a1f
- (id)initWithPostProcessOptions:(id)arg1;	// IMP=0x000000000011651f
- (id)initWithAnalysisType:(unsigned long long)arg1 isLivePhoto:(_Bool)arg2 photoOffset:(float)arg3 hadFlash:(_Bool)arg4 hadZoom:(_Bool)arg5 settlingHadZoom:(_Bool)arg6 isTimelapse:(_Bool)arg7 preferredTimeRange:(CDStruct_e83c9415)arg8 asset:(id)arg9;	// IMP=0x0000000000115ffa

@end

