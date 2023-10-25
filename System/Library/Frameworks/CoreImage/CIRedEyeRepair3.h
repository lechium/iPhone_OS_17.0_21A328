//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol RedEyeInspector3;

__attribute__((visibility("hidden")))
@interface CIRedEyeRepair3 : NSObject
{
    id <RedEyeInspector3> inspector;	// 8 = 0x8
    CDStruct_c3faddef fullBitmap;	// 16 = 0x10
    CDStruct_5973fb4f subRectangle;	// 56 = 0x38
    CDStruct_7286a259 FC;	// 72 = 0x48
    NSArray *faceArray;	// 448 = 0x1c0
    CDStruct_c3faddef faceBitmap;	// 456 = 0x1c8
    CDStruct_242bf05f S;	// 496 = 0x1f0
    struct {
        int width;
        int height;
        struct CGAffineTransform T;
        struct CGAffineTransform Tp;
        CDStruct_c3faddef O;
        CDStruct_c3faddef OO;
        _Bool computeEyePolygon;
        CDStruct_c3faddef EP;
        _Bool maskRender;
        CDStruct_c3faddef D;
        _Bool computeGradient;
        CDStruct_c3faddef G;
        CDStruct_c3faddef M;
        _Bool computeShine;
        CDStruct_c3faddef S;
        CDStruct_c3faddef P;
    } PB;	// 680 = 0x2a8
    CDStruct_ea27cb70 G;	// 1136 = 0x470
    CDStruct_3882bc9d M;	// 1216 = 0x4c0
    CDStruct_fc6961d5 FS;	// 1240 = 0x4d8
    int printFaceArrayLevel;	// 1256 = 0x4e8
    struct CGRect ROIRect;	// 1264 = 0x4f0
    float avgLuminance;	// 1296 = 0x510
    float minLuminance;	// 1300 = 0x514
    float maxLuminance;	// 1304 = 0x518
    float skinval;	// 1308 = 0x51c
    int ioffx;	// 1312 = 0x520
    int ioffy;	// 1316 = 0x524
    int erError;	// 1320 = 0x528
    NSMutableArray *repairs;	// 1328 = 0x530
    CDStruct_5973fb4f repairRect;	// 1336 = 0x538
    CDStruct_c3faddef repairMap;	// 1352 = 0x548
    NSMutableArray *failureCauses;	// 1392 = 0x570
}

+ (struct CGRect)supportRectangleWithFaceArray:(id)arg1 options:(id)arg2;	// IMP=0x006000000017c652
+ (struct CGRect)supportRectangleWithRepair:(id)arg1 imageSize:(struct CGSize)arg2;	// IMP=0x006000000017c516
+ (CDStruct_242bf05f)settingsWithOptions:(id)arg1;	// IMP=0x0060000000177e04
+ (int)faceContext:(CDStruct_7286a259 *)arg1 withFaceArray:(id)arg2 index:(int)arg3 settings:(CDStruct_242bf05f *)arg4;	// IMP=0x0060000000177bc6
+ (int)bitmapRect:(CDStruct_a734b2e2 *)arg1 point:(struct CGPoint *)arg2 polygon:(struct CGPoint [8])arg3 andDistMatrix:(float [4])arg4 forEye:(int)arg5 inFaceDictionary:(id)arg6 settings:(CDStruct_242bf05f *)arg7;	// IMP=0x0060000000177093
+ (float)yawAngleWithFaceDictionary:(id)arg1;	// IMP=0x0060000000176d1e
+ (CDStruct_a734b2e2)bitmapRectWithImageSubRectangle:(struct CGRect)arg1 settings:(CDStruct_242bf05f *)arg2;	// IMP=0x0060000000176cb8
+ (void)insertIntoThreadHopper:(CDStruct_b443dc70 *)arg1 index:(int)arg2 recChannel:(float)arg3 hue:(float)arg4 saturation:(float)arg5 luminance:(float)arg6 shapeMetricTotal:(float)arg7 xPosition:(float)arg8;	// IMP=0x00600000001e5c84
+ (void)insertIntoConnectionHopper:(CDStruct_ccbddcce *)arg1 index1:(int)arg2 drop1:(int)arg3 index2:(int)arg4 drop2:(int)arg5 score:(float)arg6;	// IMP=0x00600000001e1638
- (void)executeRepair:(id)arg1;	// IMP=0x000000000017e7be
- (id)stringWithRER3Error:(int)arg1;	// IMP=0x000000000017e77f
- (id)repairArray;	// IMP=0x000000000017e75e
- (int)transformRepairArray:(struct CGAffineTransform)arg1;	// IMP=0x000000000017e4dc
- (void)transformConvexHull:(CDStruct_d01ad076 *)arg1 withTransform:(struct CGAffineTransform)arg2;	// IMP=0x000000000017e44c
- (void)transformGlobalsWithTransform:(struct CGAffineTransform)arg1;	// IMP=0x000000000017df34
- (struct CGPoint)leftHandedTransform:(struct CGAffineTransform)arg1 ofPoint:(struct CGPoint)arg2;	// IMP=0x000000000017deb5
- (id)mutableCopyOfArray:(id)arg1;	// IMP=0x000000000017dd9a
- (id)repairWithSide:(int)arg1;	// IMP=0x000000000017dbcc
- (void)autoRepairWithFaceArray:(id)arg1;	// IMP=0x000000000017d26f
- (void)printFaceArray;	// IMP=0x000000000017ca19
- (struct CGAffineTransform)inverseImageTransformForOrientation:(int)arg1;	// IMP=0x000000000017c832
- (void)dealloc;	// IMP=0x000000000017c4a1
- (id)initWithExternalBuffer:(char *)arg1 subRectangle:(struct CGRect)arg2 rowBytes:(unsigned long long)arg3 options:(id)arg4;	// IMP=0x000000000017c332
- (_Bool)openRepairDictionary:(id)arg1 convexHull:(CDStruct_183601bc **)arg2 facts:(CDStruct_73443751 *)arg3;	// IMP=0x000000000017c177
- (_Bool)unpackToGlobalRepairDictionary:(id)arg1 convexHull:(CDStruct_183601bc **)arg2 facts:(CDStruct_73443751 *)arg3;	// IMP=0x000000000017b0c1
- (int)packGlobalRepairDictionary:(id *)arg1 withConvexHull:(CDStruct_d01ad076 *)arg2 facts:(CDStruct_73443751 *)arg3;	// IMP=0x000000000017a027
- (int)saveRepairDictionary:(id *)arg1 withConvexHull:(CDStruct_d01ad076 *)arg2 facts:(CDStruct_73443751 *)arg3;	// IMP=0x0000000000178f80
- (id)dictionaryRectArrayWithGlobalBitmapRect:(CDStruct_a734b2e2)arg1;	// IMP=0x0000000000178e5d
- (id)dictionaryRectArrayWithBitmapRect:(CDStruct_a734b2e2)arg1;	// IMP=0x0000000000178d27
- (CDStruct_a734b2e2)globalBitmapRectWithDictionaryRectArray:(id)arg1;	// IMP=0x0000000000178c1a
- (CDStruct_a734b2e2)bitmapRectWithDictionaryRectArray:(id)arg1;	// IMP=0x0000000000178aed
- (id)dictionaryPointArrayWithGlobalBitmapPoint:(struct CGPoint)arg1;	// IMP=0x0000000000178a38
- (id)dictionaryPointArrayWithBitmapPoint:(struct CGPoint)arg1;	// IMP=0x0000000000178960
- (id)dictionaryPointArrayWithEyeBitmapPoint:(struct CGPoint)arg1;	// IMP=0x0000000000178869
- (struct CGPoint)dictionaryPointWithGlobalBitmapPoint:(struct CGPoint)arg1;	// IMP=0x0000000000178837
- (struct CGPoint)dictionaryPointWithBitmapPoint:(struct CGPoint)arg1;	// IMP=0x00000000001787dc
- (struct CGPoint)globalBitmapPointWithDictionaryPointArray:(id)arg1;	// IMP=0x0000000000178750
- (struct CGPoint)bitmapPointWithDictionaryPointArray:(id)arg1;	// IMP=0x00000000001786a3
- (struct CGPoint)globalBitmapPointWithDictionaryPoint:(struct CGPoint)arg1;	// IMP=0x0000000000178664
- (struct CGPoint)bitmapPointWithDictionaryPoint:(struct CGPoint)arg1;	// IMP=0x0000000000178615
- (CDStruct_a734b2e2)repairRect;	// IMP=0x0000000000178601
- (CDStruct_c3faddef *)repairMap;	// IMP=0x00000000001785f4
- (void)repairExternalBuffer;	// IMP=0x0000000000178364
- (int)updateWithFaceIndex:(int)arg1;	// IMP=0x00000000001782a9
- (void)setInspector:(id)arg1;	// IMP=0x0000000000176cae
- (_Bool)isBlurryWithFocusStats:(CDStruct_fc6961d5)arg1;	// IMP=0x00000000001eb706
- (CDStruct_fc6961d5)focusStatsWithBitmap:(CDStruct_c3faddef *)arg1 IOD:(float)arg2;	// IMP=0x00000000001eb3f7
- (_Bool)gatherFaceStatistics:(CDStruct_3882bc9d *)arg1;	// IMP=0x00000000001eb0e3
- (int)executeRepairWithRepairDictionary:(id)arg1;	// IMP=0x00000000001eadf4
- (int)repairDictionary:(id *)arg1 withEyeIndex:(int)arg2;	// IMP=0x00000000001eaade
- (int)prepareMasksWithConvexHull:(CDStruct_d01ad076 *)arg1;	// IMP=0x00000000001e936e
- (double)next12BitRandom;	// IMP=0x00000000001e9347
- (void)start12BitRandom:(int)arg1;	// IMP=0x00000000001e933b
- (int)prepareBitmapsWithString:(char *)arg1;	// IMP=0x00000000001e82ed
- (int)renderEyePolygonToBitmap:(CDStruct_c3faddef *)arg1;	// IMP=0x00000000001e8057
- (int)prepareTransformWithEyeIndex:(int)arg1;	// IMP=0x00000000001e7d2e
- (int)prominenceConvexHull:(CDStruct_183601bc **)arg1 facts:(CDStruct_73443751 *)arg2;	// IMP=0x00000000001e6c90
- (CDStruct_818bb265)RGBtoHSV:(CDStruct_818bb265)arg1;	// IMP=0x00000000001e6ae5
- (int)recognizeThreadsWinningThreadIndex:(int *)arg1 info:(CDStruct_818bb265 *)arg2;	// IMP=0x00000000001e5e9d
- (void)swapHopperElement:(CDStruct_c952897d *)arg1 withElement:(CDStruct_c952897d *)arg2;	// IMP=0x00000000001e5de1
- (_Bool)hopperElement:(CDStruct_c952897d *)arg1 isMoreScleraThanElement:(CDStruct_c952897d *)arg2;	// IMP=0x00000000001e5d67
- (int)color:(CDStruct_818bb265 *)arg1 underConvexHull:(CDStruct_d01ad076 *)arg2 saturated:(CDStruct_818bb265 *)arg3;	// IMP=0x00000000001e59c9
- (float)threadSignedArea:(CDStruct_ed92ceb9 *)arg1 centroid:(struct CGPoint)arg2;	// IMP=0x00000000001e58f0
- (struct CGPoint)threadCentroid:(CDStruct_ed92ceb9 *)arg1;	// IMP=0x00000000001e586a
- (int)attemptClosureOfThreadIndex:(int)arg1;	// IMP=0x00000000001e5233
- (int)closeThreadIndex:(int)arg1 usingVectorField:(CDStruct_c3faddef *)arg2;	// IMP=0x00000000001e4ee1
- (int)shape:(CDStruct_183601bc **)arg1 withThreadAtIndex:(int)arg2 centroid:(struct CGPoint)arg3;	// IMP=0x00000000001e4ba8
- (int)improvedShape:(CDStruct_183601bc **)arg1 withShape:(CDStruct_892ad059 *)arg2;	// IMP=0x00000000001e4358
- (int)newShape:(CDStruct_183601bc **)arg1 byInterpolatingBetweenCheckpoints:(CDStruct_e958be04 [100])arg2 nc:(int)arg3 usingVectorField:(CDStruct_c3faddef *)arg4;	// IMP=0x00000000001e3be9
- (int)updatedCheckpoint:(struct CGPoint *)arg1 withCheckpoint:(struct CGPoint)arg2 checkpointIndex:(int)arg3 angle:(float)arg4 width:(int)arg5 height:(int)arg6 inChannel:(CDStruct_c3faddef *)arg7 threadIndex:(int)arg8 returningEdgeWidth:(float *)arg9;	// IMP=0x00000000001e2dd9
- (void)slidingWindowAnalysisOfShape:(CDStruct_892ad059 *)arg1 into:(CDStruct_04c5c26d *)arg2;	// IMP=0x00000000001e2bb4
- (void)removeSpikesFromShape:(CDStruct_892ad059 *)arg1;	// IMP=0x00000000001e2907
- (void)removeSmallBumpsFromShape:(CDStruct_892ad059 *)arg1 center:(struct CGPoint)arg2 threshold:(float)arg3;	// IMP=0x00000000001e251f
- (void)computeLengthsAnglesAndDeltaAnglesForShape:(CDStruct_892ad059 *)arg1;	// IMP=0x00000000001e23c7
- (void)removeRedundantPointsFromShape:(CDStruct_892ad059 *)arg1 closerThan:(float)arg2;	// IMP=0x00000000001e22e4
- (void)termBitmaps;	// IMP=0x00000000001e2212
- (void)initBitmaps;	// IMP=0x00000000001e21c3
- (int)connectThreadsInGrid;	// IMP=0x00000000001e1b57
- (int)findThreadsInGrid;	// IMP=0x00000000001e1a26
- (int)gatherThreadInfo:(CDStruct_ed92ceb9 *)arg1;	// IMP=0x00000000001e189a
- (void)printThreadsOnlyClosed:(_Bool)arg1 message:(char *)arg2;	// IMP=0x00000000001e1800
- (void)printThreadWithIndex:(int)arg1;	// IMP=0x00000000001e174d
- (void)printConnectionHopper:(CDStruct_ccbddcce *)arg1 message:(char *)arg2;	// IMP=0x00000000001e16da
- (_Bool)edgePoint:(struct CGPoint *)arg1 withBitmap:(CDStruct_c3faddef *)arg2 center:(struct CGPoint)arg3 perp:(struct CGPoint)arg4;	// IMP=0x00000000001e1004
- (int)analyzeMask:(CDStruct_c3faddef *)arg1 usingConvexHull:(CDStruct_d01ad076 *)arg2 producingOptimizedMask:(CDStruct_c3faddef *)arg3;	// IMP=0x00000000001e030f
- (struct CGPoint)centroidWithConvexHull:(CDStruct_d01ad076 *)arg1;	// IMP=0x00000000001e01d7
- (int)renderConvexHull:(CDStruct_d01ad076 *)arg1 distance:(float)arg2 fieldToBitmap:(CDStruct_c3faddef *)arg3;	// IMP=0x00000000001df96c
- (int)widenedHull:(CDStruct_183601bc **)arg1 withHull:(CDStruct_d01ad076 *)arg2 by:(float)arg3;	// IMP=0x00000000001df612
- (int)renderHull:(CDStruct_d01ad076 *)arg1 toBitmap:(CDStruct_c3faddef *)arg2;	// IMP=0x00000000001df3a6
- (void)measureHull:(CDStruct_d01ad076 *)arg1 majorAxis:(struct CGPoint *)arg2 majorTo:(struct CGPoint *)arg3 majorDiameter:(float *)arg4 minorAxis:(struct CGPoint *)arg5 minorTo:(struct CGPoint *)arg6 minorDiameter:(float *)arg7;	// IMP=0x00000000001df049
- (int)convexHull:(CDStruct_183601bc **)arg1 ofOriented:(_Bool)arg2 shape:(CDStruct_892ad059 *)arg3;	// IMP=0x00000000001def31
- (int)convexHull:(CDStruct_183601bc **)arg1 ofOriented:(_Bool)arg2 threadIndex:(int)arg3;	// IMP=0x00000000001ded84
- (_Bool)isConvex:(CDStruct_d01ad076 *)arg1;	// IMP=0x00000000001dec49
- (_Bool)trimStartPointFromHull:(CDStruct_d01ad076 *)arg1;	// IMP=0x00000000001debad
- (_Bool)trimEndPointFromHull:(CDStruct_d01ad076 *)arg1;	// IMP=0x00000000001deb2f
- (_Bool)trimConcaveFromHull:(CDStruct_d01ad076 *)arg1;	// IMP=0x00000000001dea9e
- (int)addPoint:(struct CGPoint)arg1 toHull:(CDStruct_d01ad076 *)arg2;	// IMP=0x00000000001de9f4
- (void)termHull:(CDStruct_d01ad076 *)arg1;	// IMP=0x00000000001de9d4
- (int)initHull:(CDStruct_183601bc **)arg1 withOrientation:(_Bool)arg2;	// IMP=0x00000000001de94b
- (void)regressionWithPointIndex:(int)arg1;	// IMP=0x00000000001de6b7
- (int)nextPointIndexWithPointIndex:(int)arg1;	// IMP=0x00000000001de515
- (int)copyGridInto:(CDStruct_ea27cb70 *)arg1 transform:(struct CGAffineTransform)arg2 height:(int)arg3;	// IMP=0x00000000001de0c0
- (int)linkUpPointIndex:(int)arg1 toPointIndex:(int)arg2;	// IMP=0x00000000001de002
- (int)replacePointAndDirection:(int)arg1;	// IMP=0x00000000001ddf0d
- (void)forAllGridThreadsNear:(struct CGPoint)arg1 withinRadius:(float)arg2 do:(CDUnknownFunctionPointerType)arg3 context:(void *)arg4;	// IMP=0x00000000001ddd7f
- (void)forAllGridPointsNear:(int)arg1 withinRadius:(float)arg2 do:(CDUnknownFunctionPointerType)arg3 context:(void *)arg4;	// IMP=0x00000000001ddbd9
- (int)lookForPoint:(struct CGPoint *)arg1 onLine:(CDStruct_12b04d25)arg2 nearestPoint:(struct CGPoint)arg3;	// IMP=0x00000000001ddaf4
- (void)removeThreadAtIndex:(int)arg1;	// IMP=0x00000000001dda11
- (void)putThreadAtIndex:(int)arg1;	// IMP=0x00000000001dd94c
- (int)connectThreads:(int)arg1 drop1:(int)arg2 and:(int)arg3 drop2:(int)arg4;	// IMP=0x00000000001dd835
- (int)newShape:(CDStruct_183601bc **)arg1;	// IMP=0x00000000001dd78b
- (int)newThread:(CDStruct_183601bc **)arg1;	// IMP=0x00000000001dd6d8
- (int)insertPoint:(struct CGPoint)arg1 andDirection:(struct CGPoint)arg2 intoGrid:(_Bool)arg3;	// IMP=0x00000000001dd520
- (void)point:(struct CGPoint)arg1 toGridRow:(int *)arg2 column:(int *)arg3;	// IMP=0x00000000001dd47f
- (void)termGrid;	// IMP=0x00000000001dd3e0
- (_Bool)initGridWithBitmap:(CDStruct_c3faddef *)arg1 scale:(int)arg2;	// IMP=0x00000000001dd1a4
- (int)copyShape:(CDStruct_892ad059 *)arg1 into:(CDStruct_892ad059 *)arg2 transform:(struct CGAffineTransform)arg3 height:(int)arg4;	// IMP=0x00000000001dd0b8
- (void)termShapePoints:(CDStruct_892ad059 *)arg1;	// IMP=0x00000000001dd099
- (int)addPoint:(struct CGPoint)arg1 toShapePoints:(CDStruct_892ad059 *)arg2;	// IMP=0x00000000001dd05b
- (int)initShapePoints:(CDStruct_892ad059 *)arg1 withMaxPoints:(int)arg2;	// IMP=0x00000000001dd013
- (void)condenseFourChannelRecognitionMap:(CDStruct_c3faddef *)arg1 intoOneChanneMap:(CDStruct_c3faddef *)arg2;	// IMP=0x00000000001dcf9c
- (void)magnitudeMap:(CDStruct_c3faddef *)arg1 fromGabor:(CDStruct_c3faddef *)arg2;	// IMP=0x00000000001dcf1c

@end
