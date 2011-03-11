/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary, NSMutableArray;

@interface ECMappingContext : NSObject  {
    struct __CFDictionary { } *mIndexToMappedIndex;
    NSMutableDictionary *mSheetNameToMappedIndex;
    struct __CFDictionary { } *mObjectToMappingInfo;
    NSMutableArray *mMappingInfos;
}

+ (id)mappingContext;

- (id)init;
- (void)dealloc;
- (struct ChVector<OcText> { struct OcText {} *x1; struct OcText {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)mappedSheetNames;
- (unsigned int)mappedSheetIndexForSheetIndex:(unsigned int)arg1;
- (id)mappingInfoForObject:(id)arg1;
- (unsigned int)mappingInfoCount;
- (id)mappingInfoAtIndex:(unsigned int)arg1;
- (void)associateMappingInfo:(id)arg1 withSheetName:(id)arg2 andSheetIndex:(unsigned int)arg3 andObject:(id)arg4;
- (unsigned int)mappedSheetIndexForSheetName:(id)arg1;

@end