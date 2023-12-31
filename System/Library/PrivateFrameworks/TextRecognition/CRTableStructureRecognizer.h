//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol MTLDevice, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CRTableStructureRecognizer : NSObject
{
    struct unique_ptr<CoreRecognition::EspressoModelWrapper, std::default_delete<CoreRecognition::EspressoModelWrapper>> _encoderModel;	// 8 = 0x8
    struct unique_ptr<CoreRecognition::EspressoModelWrapper, std::default_delete<CoreRecognition::EspressoModelWrapper>> _decoderModel;	// 16 = 0x10
    _Bool _modelsLoaded;	// 24 = 0x18
    unsigned long long _codemapSize;	// 32 = 0x20
    long long _maxNumberOfInputRegions;	// 40 = 0x28
    NSArray *_modelConfigurationsNumRegions;	// 48 = 0x30
    NSString *_modelSmallestConfig;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
    long long _inferenceCount;	// 72 = 0x48
    unsigned long long _noTableIndex;	// 80 = 0x50
    unsigned long long _eopIndex;	// 88 = 0x58
    unsigned long long _rowsIndex;	// 96 = 0x60
    unsigned long long _colsIndex;	// 104 = 0x68
    unsigned long long _mergeIndex;	// 112 = 0x70
    unsigned long long _lowestNumberIndex;	// 120 = 0x78
    unsigned long long _highestNumberIndex;	// 128 = 0x80
    unsigned long long _highestBinIndex;	// 136 = 0x88
    NSString *_encoderName;	// 144 = 0x90
    NSString *_decoderName;	// 152 = 0x98
    unsigned long long _computeDeviceType;	// 160 = 0xa0
    id <MTLDevice> _metalDevice;	// 168 = 0xa8
    NSArray *_codemap;	// 176 = 0xb0
}

+ (id)loadCodemap;	// IMP=0x006000000005f275
+ (id)URLOfModelName:(id)arg1;	// IMP=0x006000000005f127
+ (id)defaultDecoderModelName;	// IMP=0x006000000005e525
+ (id)defaultEncoderModelName;	// IMP=0x006000000005e518
- (id).cxx_construct;	// IMP=0x00000000000658be
- (void).cxx_destruct;	// IMP=0x000000000006583d
@property(readonly, nonatomic) NSArray *codemap; // @synthesize codemap=_codemap;
- (vector_fef9a72d)normalizedLineRegions:(id)arg1 numConfigurationRegions:(long long)arg2 usingMinMaxNorm:(_Bool)arg3;	// IMP=0x000000000006526e
- (void)reduceMemoryByResizing;	// IMP=0x0000000000065153
- (id)tableGroupRegionFromResult:(id)arg1 recognizedLines:(id)arg2;	// IMP=0x0000000000064404
- (id)alignResult:(struct CRTableStructureRecognizerResultParsed)arg1 lines:(id)arg2 lineIndexMap:(vector_6118216b)arg3;	// IMP=0x0000000000062fd2
- (struct CRTableStructureRecognizerResultParsed)parseResult:(id)arg1;	// IMP=0x0000000000062435
- (vector_5e219421)readBinValuesStartingAtIndex:(int *)arg1 tokenIndexes:(vector_cd3186ef)arg2;	// IMP=0x000000000006219b
- (id)_recognizeTableStructureBlock:(void *)arg1 numConfigurationRegions:(long long)arg2;	// IMP=0x0000000000061129
- (id)recognizeTableStructure:(void *)arg1 numConfigurationRegions:(long long)arg2;	// IMP=0x0000000000060ff4
- (id)recognizeDetectedTableInRegion:(id)arg1 filteredResults:(id)arg2 tableIndex:(unsigned long long)arg3 image:(id)arg4;	// IMP=0x000000000005fabb
- (_Bool)preheatWithError:(id *)arg1;	// IMP=0x000000000005fa6c
- (struct CRTableStructureRecognizerInputFeatures)extractFeaturesFromImage:(id)arg1 numConfigurationRegions:(long long)arg2 lines:(id)arg3;	// IMP=0x000000000005f7df
- (id)getConfigurationStringForNumRegions:(long long)arg1;	// IMP=0x000000000005f7ba
- (long long)getConfigurationNumRegions:(long long)arg1;	// IMP=0x000000000005f620
- (id)initWithEncoderName:(id)arg1 decoderName:(id)arg2 computeDeviceType:(unsigned long long)arg3 metalDevice:(id)arg4;	// IMP=0x000000000005efe8
- (_Bool)loadModels;	// IMP=0x000000000005e723
- (int)getEncoderEngine:(unsigned long long)arg1;	// IMP=0x000000000005e635
- (id)initWithComputeDeviceType:(unsigned long long)arg1 metalDevice:(id)arg2;	// IMP=0x000000000005e548
- (id)init;	// IMP=0x000000000005e532

@end

