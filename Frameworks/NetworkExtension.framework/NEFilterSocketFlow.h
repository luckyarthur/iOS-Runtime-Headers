/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEFilterSocketFlow : NEFilterFlow <NSCopying, NSSecureCoding> {
    int  _epid;
    unsigned char  _euuid;
    struct sockaddr_storage { 
        unsigned char ss_len; 
        unsigned char ss_family; 
        BOOL __ss_pad1[6]; 
        long long __ss_align; 
        BOOL __ss_pad2[112]; 
    }  _lastLocalAddress;
    struct sockaddr_storage { 
        unsigned char ss_len; 
        unsigned char ss_family; 
        BOOL __ss_pad1[6]; 
        long long __ss_align; 
        BOOL __ss_pad2[112]; 
    }  _lastRemoteAddress;
    NWEndpoint * _localEndpoint;
    int  _pid;
    NWEndpoint * _remoteEndpoint;
    int  _socketFamily;
    int  _socketProtocol;
    int  _socketType;
    unsigned char  _uuid;
}

@property int epid;
@property (copy) NWEndpoint *localEndpoint;
@property int pid;
@property (copy) NWEndpoint *remoteEndpoint;
@property int socketFamily;
@property int socketProtocol;
@property int socketType;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (int)epid;
- (id)initWithCoder:(id)arg1;
- (id)initWithSocketFamily:(int)arg1 socketType:(int)arg2 socketProtocol:(int)arg3 pid:(int)arg4 epid:(int)arg5 uuid:(unsigned char)arg6 euuid:(unsigned char)arg7;
- (void)lastLocalAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1;
- (void)lastRemoteAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1;
- (id)localEndpoint;
- (int)pid;
- (id)remoteEndpoint;
- (void)setEpid:(int)arg1;
- (void)setLocalEndpoint:(id)arg1;
- (void)setPid:(int)arg1;
- (void)setRemoteEndpoint:(id)arg1;
- (void)setSocketFamily:(int)arg1;
- (void)setSocketProtocol:(int)arg1;
- (void)setSocketType:(int)arg1;
- (int)socketFamily;
- (int)socketProtocol;
- (int)socketType;

@end
