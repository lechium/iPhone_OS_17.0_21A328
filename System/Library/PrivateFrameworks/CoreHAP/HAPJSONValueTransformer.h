//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HAPJSONValueTransformer
{
}

+ (void)initialize;	// IMP=0x00800000000de962
+ (id)defaultJSONValueTransformer;	// IMP=0x00800000000de951
+ (Class)expectedTransformedClassForFormat:(unsigned long long)arg1;	// IMP=0x00800000000de917
- (id)reverseTransformedValue:(id)arg1 format:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000de7da
- (id)transformedValue:(id)arg1 format:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000de6d4

@end

