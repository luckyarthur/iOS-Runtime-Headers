/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblemStatus : PBCodable <NSCopying> {
    double  _creationDate;
    GEORPDetails * _details;
    struct { 
        unsigned int creationDate : 1; 
        unsigned int problemState : 1; 
    }  _has;
    GEORPNotification * _notification;
    NSString * _problemId;
    GEORPResolution * _problemResolution;
    int  _problemState;
}

@property (nonatomic) double creationDate;
@property (nonatomic, retain) GEORPDetails *details;
@property (nonatomic) BOOL hasCreationDate;
@property (nonatomic, readonly) BOOL hasDetails;
@property (nonatomic, readonly) BOOL hasNotification;
@property (nonatomic, readonly) BOOL hasProblemId;
@property (nonatomic, readonly) BOOL hasProblemResolution;
@property (nonatomic) BOOL hasProblemState;
@property (nonatomic, retain) GEORPNotification *notification;
@property (nonatomic, retain) NSString *problemId;
@property (nonatomic, retain) GEORPResolution *problemResolution;
@property (nonatomic) int problemState;

- (int)StringAsProblemState:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)creationDate;
- (void)dealloc;
- (id)description;
- (id)details;
- (id)dictionaryRepresentation;
- (BOOL)hasCreationDate;
- (BOOL)hasDetails;
- (BOOL)hasNotification;
- (BOOL)hasProblemId;
- (BOOL)hasProblemResolution;
- (BOOL)hasProblemState;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)notification;
- (id)problemId;
- (id)problemResolution;
- (int)problemState;
- (id)problemStateAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCreationDate:(double)arg1;
- (void)setDetails:(id)arg1;
- (void)setHasCreationDate:(BOOL)arg1;
- (void)setHasProblemState:(BOOL)arg1;
- (void)setNotification:(id)arg1;
- (void)setProblemId:(id)arg1;
- (void)setProblemResolution:(id)arg1;
- (void)setProblemState:(int)arg1;
- (void)writeTo:(id)arg1;

@end
